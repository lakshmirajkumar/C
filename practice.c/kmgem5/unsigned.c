#include<stdio.h>

int main()
{
unsigned int a=0xaabbccdd;
printf("%x \n",a>>20);

printf("%x \n",a&0x000fffff);

return 0;
}
