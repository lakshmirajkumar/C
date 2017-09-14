#include<stdio.h>
main()
{
int a[20],b[20];
int i,n;
printf("enter the n value:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("given number\tsquare of the no.\n");
for(i=0;i<n;i++)
{
b[i]=a[i]*a[i];
printf("%d \t\t\t %d\n",a[i],b[i]);
}





}
