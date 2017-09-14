//power of 2 or not
#include<stdio.h>
main()
{
int x;
printf("enter the number");
scanf("%d",&x);
if((x&(x-1))!=0)
printf("given number is not a power of 2\n");
else
printf("given number is a power of 2\n");




}
