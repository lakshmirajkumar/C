#include<stdio.h>
int testbit(int p)
{
if(p==1)
{
printf("TRUE \n");
}
else
{
printf("FALSE \n");
}
return 0;
}




main()
{
unsigned int p=0xa427;
int b=3,a;
//printf("enter the two parameters \n");
//scanf("%x %d",p,b);
p=p>>(b);
p=p&01;
printf("%x \n",p);
testbit(p);
}




