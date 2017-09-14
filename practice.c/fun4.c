#include<stdio.h>
int summ (int x,int y);
main()
{
int x,y,sum;
printf("enter two numbers:");
scanf("%d %d",&x,&y);
printf("summation of given numbers is:%d \n",summ (x,y));
printf("summation of given numbers is:%d \n",summ (60,10));
printf("summation of given numbers is:%d \n",summ ((x+y),y));
return 0;
}
int summ (int a,int b)
{
int sum;
sum =a+b;
return sum;
}
