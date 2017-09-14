#include<stdio.h>
main()
{
int *a[5],b=0;
int i,j;
printf("enter the values:\n");
for(i=0;i<=5;i++)
{
scanf("%d",&*(a+i));
}
printf("the reverse order of the given numbers is:\n");
for(i=5;i>=0;i--)
{
printf("%d ",*(a+i));
}
printf("\n");
}
