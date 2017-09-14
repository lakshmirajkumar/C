#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
main()
{

int fd,ret,offset;
fd=open("file1", O_RDWR);
if (fd<0)
{
perror("copy.c:");
exit(0);
}

offset=lseek(fd,4,SEEK_SET);
//printf("\n%d\n",offset);
ret=write(fd,"murthy ",7);

offset=lseek(fd,1,SEEK_CUR);
ret=write(fd,"raj",3);





}







