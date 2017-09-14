#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

main()
{
int fd1, fd2;
char s[27];
fd1=open("file1",O_RDONLY);
if(fd1<0)
{
perror("copy.c:");
}
fd2=open("file2",O_CREAT|O_WRONLY,S_IRWXU|S_IRWXG|S_IRWXO);
if(fd2<0)
{
perror("copy.c:");
}
while((read(fd1,&s,27))!=0)
{
write(fd2,&s,27);
}
close(fd1);
close(fd2);
}
