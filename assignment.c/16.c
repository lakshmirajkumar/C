//number is 0 or not
#include<stdio.h>
main()
{
int x,count=0;
printf("enter the number\n");
scanf("%x",&x);
while(x)
{
x=(x&(x-1));
count++;
}
if(count==0)
printf("number is 0\n");
else
printf("number is not a 0\n");

}
