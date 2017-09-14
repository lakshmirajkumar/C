//no. of 1's in a floating no.
#include<stdio.h>
main()
{
int x=10,y,count=0;
float f=0.86;
while(x!=0)
{
x=x/2;
y=x%2;
printf("%d",y);
}
while(count<=3)
{
f=f*2;

printf(".%f\n",f);
count++;

}



}
