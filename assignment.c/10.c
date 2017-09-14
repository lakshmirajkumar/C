//number of 1's in an integer
#include<stdio.h>
main()
{
int x;
int count=0;
printf("enter the number\n");
scanf("%d",&x);
while(x)
{
x=(x&(x-1));
count++;

}
printf("the number contains %d 1's\n",count);

}
