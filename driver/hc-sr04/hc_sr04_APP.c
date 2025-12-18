#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <poll.h>

#define DEV_NAME   "/dev/hc_sr04_drvs"



int main(int argc, char **argv)
{
	int fd;
    int ret;
  
  
	
	/* 2. 打开文件 */
	fd = open(DEV_NAME, O_RDWR);   // | O_NONBLOCK

	if (fd < 0)
	{
		printf("can not open file %s, %d\n", DEV_NAME, fd);
		return -1;
	}

    int dist_cm;
    while (1)
    {
        if ((ret = read(fd, &dist_cm, 4)) > 0)
        {
            printf("%d cm\n", dist_cm);
        }
        else
        {
            printf("not get time, err %d\r\n", ret);
        }
        usleep(500000);
    }
}
