# 1 下载Dropbear源码

或者直接去官方下载压缩包

```bash
git clone https://github.com/mkj/dropbear.git
```

# 2 交叉编译源码

需提前安装好交叉编译器,我把它安装到了/home/hjy/arm-Dropbear下

```bash
cd dropbear-master
export CC=arm-linux-gnueabihf-gcc
export STRIP=arm-linux-gnueabihf-strip
export CFLAGS="-Os -march=armv7-a -mfpu=neon -mfloat-abi=hard"

./configure --host=arm-linux-gnueabihf --prefix=/home/hjy/arm-Dropbear --disable-zlib --disable-largefile --disable-loginfunc --disable-pututline --disable-pututxline --disable-wtmp --disable-wtmpx --disable-lastlog --disable-utmp --disable-utmpx --disable-syslog --disable-shadow --enable-static --disable-harden

make -j16
make install
```

# 3 复制到开发板

我这里用的是nfs连的开发板，你可以用其它方式，nfs目录为\~/tmp

```bash

tar cvf ~/tmp/arm-Dropbear.tar arm-Dropbear/ #ubuntu

#安装到了开发板的 /usr/lib/下
tar xvf /mnt/arm-Dropbear.tar  -C /usr/lib/ #开发板
```

# 4 配置

我用的busybox不需要加sudo，按需添加

```bash
#设置环境变量
echo 'export PATH=$PATH:/usr/lib/arm-Dropbear/bin:/usr/lib/arm-Dropbear/sbin' >> /etc/profile

#设置开机启动
echo 'dropbear' >> /etc/init.d/rcS

# 初始化所需的主机密钥
mkdir -p /etc/dropbear
dropbearkey -t rsa -f /etc/dropbear/dropbear_rsa_host_key
```

# 5 设置root密码为root (可选)

如果你有密码，那么跳过此步

```bash
PASSWORD="root"
# 生成密码哈希
HASH=$(echo "$PASSWORD" | busybox cryptpw 2>/dev/null)
if [ -z "$HASH" ]; then
    # 如果cryptpw不可用，使用openssl
    HASH=$(openssl passwd -1 "$PASSWORD" 2>/dev/null || echo "$PASSWORD")
fi

# 写入passwd文件
echo "root:$HASH:0:0:root:/root:/bin/sh" > /etc/passwd

echo "已设置密码为: root"

```

# 6 启动

```bash
dropbear


```

# 7 测试链接

你也可以选择选择可以支持ssh的软件，这一步一行一行来
开发板ip 192.168.101.123，如果不知道 开发板执行 `ip a`看一下ip

```bash
#1
ssh root@192.168.101.123 #pc 输入
#2 
yes #pc 输入

#3
root #pc 输入 ----步骤5设置的密码

```

# 8 可能的错误

```bash
# 如果报错 User 'root' has invalid shell, rejected，执行下列命令
echo "/bin/sh" > /etc/shells
echo "/bin/ash" >> /etc/shells
killall dropbear
dropbear
```