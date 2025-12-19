#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEV_NAME   "/dev/hc_sr04_drvs"
#define BRIGHTNESS_FILE "/sys/class/backlight/backlight/brightness"
#define LOOP_INTERVAL 500000

int main(int argc, char **argv)
{
    int fd_hc, fd_lcd;
    int ret;
    char buf_bl[4] = {0};
    
    /* 2. 打开文件 */
    fd_hc = open(DEV_NAME, O_RDWR);   // | O_NONBLOCK
    
    if (fd_hc < 0)
    {
        printf("can not open file %s, %d\n", DEV_NAME, fd_hc);
        return -1;
    }
    
    fd_lcd = open(BRIGHTNESS_FILE , O_RDWR);
    if (fd_lcd < 0)
    {
        printf("can not open file %s, fd=%d\n", BRIGHTNESS_FILE, fd_lcd);
        return -1;
    }
    
    if (!(ret = read(fd_lcd, buf_bl, 4))) {
        printf("read /sys/class/backlight/backlight/brightness error\n");
        return -1;
    }
    printf("lcd-brightness:%s size=%d\n", buf_bl, ret);
    printf("buf_bl[0]:%c size", buf_bl[0]);
    
    int dist_cm;
    int count = 0;

    while (1)
    {   
       
        if (read(fd_hc, &dist_cm, 4) > 0) {
            printf("dist:%d\n", dist_cm);
            if ( buf_bl[0] == '7') {
                //亮屏状态下
                printf("亮屏状态下:%s\n", buf_bl);
                if ( dist_cm  < 70 && dist_cm > 10) {
                    //有人
                    sleep(5);
                } else {
                    printf("关屏\n");
                    char buf[3] = "0";
                    lseek(fd_lcd, 0, SEEK_SET);
                    if (write(fd_lcd, buf, 1) < 0) {
                        printf("write fd_lcd error\n");
                        return -1;
                    }
                    buf_bl[0] = '0';
                } 
            } else {
                //息屏状态下
                if (dist_cm  < 70 && dist_cm > 10) {
                    count++;
                    if (count == 3) {
                        char buf[3]= "7";
                        lseek(fd_lcd, 0, SEEK_SET);
                        if (write(fd_lcd, &buf, 1) < 0) {
                            printf("write fd_lcd=7 error\n");
                        }
                        buf_bl[0] = '7';
                        printf("开屏\n");
                        count = 0;
                    }
                } else {
                    count = 0;
                }
            }
           
        } 
        usleep(500000);
    }
}
