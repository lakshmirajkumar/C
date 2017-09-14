#include<stdio.h>
int display (int n);
main()
{
int n;
printf("enter the number:\n");
scanf("%d",&n);
display (n);
return 0;
}
int display (n)
{
if(n==0)
return 0;
printf("%d ",n);
display (n-1);
}
