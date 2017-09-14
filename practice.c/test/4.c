#include<stdio.h>
main()
{
int x[10],y[10],i,j=0,num;
printf("enter the array elements\n");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
printf("enter how many bits do u want to shift\n");
scanf("%d",&num);
for(i=num-1;i>=0;i--)
{
y[j]=x[i];
j++;
}
for(i=num;i<=10;i++)
{
y[i]=x[i];
}
for(i=0;i<10;i++)
{
printf("%d ",y[i]);
}
printf("\n");
}
