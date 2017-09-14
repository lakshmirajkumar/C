//20 bit on or off
#include<stdio.h>
main()
{
int x,y=0x00010000;
printf("enter the 32 bit number\n");
scanf("%x",&x);
x=(x&y);
if(x==y)
printf("the 20th bit is ON\n");
else
printf("the 20th bit is OFF\n");


}
