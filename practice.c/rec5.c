#include<stdio.h>
int fabonacci (int n);
main()
{
int n,i;
printf("enter the max. number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d ",fabonacci(i));
}
printf("\n");
}
int fabonacci (i)
{

if(i==0 || i==1)
return 1;
else
return (fabonacci (i-1)+fabonacci (i-2));


}
