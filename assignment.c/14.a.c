//shifting even bits
#include<stdio.h>
main()
{
int x,y=0xaaaaaaaa;
printf("enter the hexadecimal number\n");
scanf("%x",&x);
x=x^y;

printf("%x\n",x);







}
