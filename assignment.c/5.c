//size of operator

#include<stdio.h>
main()
{
int x=0x200;
int count=0;
while (x != 0)
{
x=(x<<1);
count++;

}
printf("%d\n",count/8);
}
