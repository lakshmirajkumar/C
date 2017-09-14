#include<stdio.h>
int main()
{
int a[10];
int x,max=0,min=9999,i,b=0;
float avg;
printf("enter the no.of elements in array:...");
scanf("%d",&x);
if(x>10)
{
printf("over flow...please enter below 10 elements\n");
return 0;
}
for(i=0;i<x;i++)
{
printf("enter the element:");
scanf("%d",&a[i]);
b+=a[i];
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
avg=b/x;
printf("addition is:%d\n",b);
printf("average of given numbers is:%f\n",avg);
printf("maximum value is:%d\n", max);
printf("minimum value is:%d\n", min);
return 0;
}
