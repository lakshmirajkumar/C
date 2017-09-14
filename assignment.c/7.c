//multiplication by 9

#include<stdio.h>
int main()
{
int x,n;
printf("enter the value you want to multiply by 9\n");
scanf("%d", &x);
n=(x<<3)+x;
printf("the multiplication of %d by 9 is %d\n",x,n);
return 0;
}
