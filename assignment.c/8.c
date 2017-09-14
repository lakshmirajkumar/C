//odd or even
#include<stdio.h>
main()
{
int x;
printf("enter the number");
scanf("%d",&x);
if((x&0x1)==0)
printf("given number is even\n");
else
printf("given number is odd\n");




}
