#include<stdio.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/time.h>
#include<linux/input.h>
#include<fcntl.h>
#include<sys/stat.h>
struct input_event ev[1];
main()
{
fd_set readfds,testfd;
int fd,fd1,fd2,fd3;
int buf[20];
int version;
unsigned short id[4];
char name[256] = "Unknown";


fd=open("/dev/input/event1",O_RDONLY);
fd3=open("/dev/input/event2",O_RDONLY);


FD_ZERO(&readfds);
FD_SET(fd,&readfds);
FD_SET(fd3,&readfds);
while(1)
{
//testfd=readfds;
fd1=select(FD_SETSIZE,&readfds,NULL,NULL,0);
if(FD_ISSET(fd,&testfd))
{
printf("power button\n");
fd2=read(fd,&ev[0],sizeof(struct input_event));
//printf("TYPE OF THE EVENT:%d,VALUE:%x,,CODE:%d ,TIME VALUE:%ld\n",ev[0].type,ev[0].value,ev[0].code,ev[0].time.tv_sec);

printf("event:%d,time:%d.%06ld,code:%d,value:%x",ev[0].type,ev[0].time.tv_sec,ev[0].time.tv_usec,ev[0].code,ev[0].value);
        ioctl(fd, EVIOCGVERSION, &version);
        printf("Input driver version is %d.%d.%d\n",version >> 16, (version >> 8) & 0xff, version & 0xff);
        ioctl(fd, EVIOCGID, id);
        printf("Input device ID: bus 0x%x vendor 0x%x product 0x%x version 0x%x\n",id[ID_BUS], id[ID_VENDOR], id[ID_PRODUCT], id[ID_VERSION]);
        ioctl(fd, EVIOCGNAME(sizeof(name)), name);
        printf("Input device name: \"%s\"\n", name);
}
if(FD_ISSET(fd3,&readfds))
{
printf("keyboard button\n");
fd2=read(fd3,&ev[1],sizeof(struct input_event));
//printf("TYPE OF THE EVENT:%d,VALUE:%x,,CODE:%d ,TIME VALUE:%ld\n",ev[1].type,ev[1].value,ev[1].code,ev[1].time.tv_sec);

printf("event:%d,time:%d.%06ld,code:%d,value:%d",ev[1].type,ev[1].time.tv_sec,ev[1].time.tv_usec,ev[1].code,ev[1].value);

	ioctl(fd3, EVIOCGVERSION, &version);
        printf("Input driver version is %d.%d.%d\n", version >> 16, (version >> 8) & 0xff, version & 0xff);
        ioctl(fd3, EVIOCGID, id);
        printf("Input device ID: bus 0x%x vendor 0x%x product 0x%x version 0x%x\n", id[ID_BUS], id[ID_VENDOR], id[ID_PRODUCT], id[ID_VERSION]);
        ioctl(fd3, EVIOCGNAME(sizeof(name)), name);
        printf("Input device name: \"%s\"\n", name);
}
}

}

