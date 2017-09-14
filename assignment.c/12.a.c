//flipped bits
#include<stdio.h>
main()
{
int a,b;
printf("enter the numbers\n");
scanf("%d %d",&a,&b);int c,count=0;
c=a^b;
printf("c=%d\n",c);
while(c)
{
c=(c&(c-1));
count++;
}
printf("the flipped digits in a given no.:%d\n",count);

}
