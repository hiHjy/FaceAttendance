# 驱动开发

本项目有两个传感器，摄像头的驱动内核自带，只需要内核启动UAC驱动即可，这里记录 HC-SR04（超声波传感器）和 DHT11（温湿度传感器）要点。

## HC-SR04

### 基本原理

先搞清楚这个传感器的基本工作原理：通过声波测距，发出的声音碰到障碍物会反弹，声音在空气里传播的速度是已知的，根据时间就能计算出测量的距离。具体就是：

1. 采用 IO 口 TRIG 触发测距， 给至少 10us 的高电平信号

2. 模块自动发送 8 个 40khz 的方波， 自动检测是否有信号返回

3. 有信号返回， 通过 IO 口 ECHO 输出一个高电平， 高电平持续的时间就是超声波从发射到返回的时间。

### 流程

1. 服务程序 500ms 周期性的去主动的read,从而去调用驱动的read，并触发传感器

   ```c
    	/* 启动触发信号 */
       gpio_set_value(hc_sr04.gpio_trig, 1);  
       udelay(15);
       gpio_set_value(hc_sr04.gpio_trig, 0);
   ```

2. 触发传感器后需阻塞等待IO口ECHO变高电平，这里用的中断和等待队列以及 工作线程配合

   ```c
   // 1. 先阻塞等待数据准备好
   
   wait_event_interruptible_timeout(dev->wq, dev->data_ready, msecs_to_jiffies(60)); //read 阻塞
   
   // 2. echo变高电平触发中断，进入中断，记录高电平开始的时间 hc_sr04_irq_handler
   
   	//开始时间
   dev->start_us = ktime_to_us(ktime_get()); 							//hc_sr04_irq_handler --第一次中断
   	//echo变低电平再次进入中断,记录高电平结束时间
   dev->end_us = ktime_to_us(ktime_get());									//hc_sr04_irq_handler --第二次中断
   	//得到高电平持续时间后进入工作线程处理
   schedule_work(&dev->work);															//hc_sr04_irq_handler --第二次中断
   
   // 3. 这里进入工作线程后计算距离
   
   	//计算距离
   u32 time_us = dev->end_us - dev->start_us;							 //hc_sr04_work_handler
   dev->distance_cm = time_us * 34 / 2000；									//hc_sr04_work_handler
   	//等待队列唤醒条件设为真
   dev->data_ready = 1;																		//hc_sr04_work_handler
   	//唤醒阻塞在read中的进程
   wake_up_interruptible(&dev->wq); 												//hc_sr04_work_handler
   
   // 4. 唤醒read中阻塞的进程将计算好的距离移交给应用层
   copy_to_user(buf, &dev->distance_cm, count)							//read 继续执行后续的代码
   
     
   
   ```

这是完整的一套流程，主要是先阻塞降低cpu占用，然后利用中断仅记录耗时较小的时间然后，计算等耗时操作都放到安全的中断下半部（struct work_struct）去执行，在工作线程函数中需要唤醒阻塞的进程，到此整套流程结束。



