#include<stdio.h>
main()
{
int x[10],i,j;
printf("enter the array values\n");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<=8;i++)
{
for(j=i+1;j<=9;j++)
{
if(x[i]==x[j])
printf("not a distinct array\n");
}
}
//printf("given array is a distinct array\n");
}
