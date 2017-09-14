#include<stdio.h>
main()
{
int a=0x160;
int b=0x100;
int sum,sub,xor,c;
//sum=a+b;
//sub=a-b;
sum=(a-(~b))-1;
sub=a+((~b)+1);
xor=(a^b);
c=((~b)+1);
printf("given numbers %d %d\n",a,b);
printf(" \t negation of b is %d\n\t 2`s comlement is %d\n\t sum is %d\n\t sub is %d\n\t xor is %d\n",(~b),c,sum,sub,xor);


}
