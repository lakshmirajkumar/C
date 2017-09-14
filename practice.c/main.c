#include<stdio.h>
int main()

{
int x,y;
printf("enter the values of x and y:\n");
scanf("%d %d",&x,&y);
printf("addition is :%d\n", add(x,y));
printf("subtraction is : %d\n", sub(x,y));
printf("multiplication is :%d\n", mul(x,y));
printf("division is :%d\n", div(x,y));
return 0;
}
