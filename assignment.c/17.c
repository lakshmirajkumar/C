//swaping
#include<stdio.h>
main()
{
int x,y,temp=0;
printf("enter any two integer numbers\n");
scanf("%d %d",&x,&y);
printf("x=%d \ny=%d\n",x,y);
printf("after swapping\n");
//temp=x;
//x=y;
//y=temp;
//x=x+y;
//y=x-y;
//x=x-y;
x=x^y;
y=x^y;
x=x^y;
printf("x=%d \ny=%d\n",x,y);




}
