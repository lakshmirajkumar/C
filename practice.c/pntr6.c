#include<stdio.h>
main()
{
int b[3]={1,2,3};
int *p;
p=&b[0];
printf("%x  %x  %x  \n",p,p+1,p+2);
printf("%x  %x  %x  \n",&b[0],&b[1],&b[2]);
}


