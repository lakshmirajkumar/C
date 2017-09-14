#include<stdio.h>
int summation (int n);
main()
{
int n;
printf("enter the max. number:");
scanf("%d",&n);
printf("the summation is:%d \n",summation (n));
return 0;
}
int summation (int n)
{
int sum;
if (n==0)
return 0;
sum=(n+summation(n-1));
return sum;
}
