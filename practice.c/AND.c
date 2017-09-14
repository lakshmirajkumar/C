#include<stdio.h>
main()
{
int a=0011,b=0100;
printf("the result of AND is %d\n",(a&b));
printf("the result of OR is  %d\n",(a|b));
printf("the result of EX-OR is %d\n",(a^b));
printf("the result of NAND is %d\n",!(a&b));
printf("the result of NOR is %d\n",!(a|b));
printf("the 1's complement of a is %d\n",!(a));




}
