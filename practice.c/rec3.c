#include<stdio.h>
void function (int n);
main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
function (n);
return 0;
}
void function (n)
{
int d;
if(n==0)
return 0;
d=n%10;
printf("%d \n",n);
function((n/10));
}
