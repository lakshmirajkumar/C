#include<stdio.h>
int reverse(int s);
main()
{
long int s;
printf("enter the number:\n");
scanf("%ld",&s);
reverse(s);
printf("\n");
}
int reverse(int s)
{
int num;
if(s<=0)
return 0;
else
num=s%10;
printf("%d",num);
reverse(s/10);
}
