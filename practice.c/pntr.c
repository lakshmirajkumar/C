#include<stdio.h>
main()
{
int c=20;
int b=10;
swap(&b,&c);
}
swap(int *x, int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
printf(" b:%d\n",*x);
printf(" c:%d\n",*y);
}





