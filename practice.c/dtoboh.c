#include<stdio.h>
void fun(int n,int b);
main()
{
int n;
printf("enter the decimal number:\t");
scanf("%d",&n);
printf("binary form is:");
fun(n,2);
printf("octal form is:");
fun(n,8);
printf("hexa decimal form is:");
fun(n,16);

}
void fun(int n,int b)
{
int i=0,j,rem;
int arr[10];
while(n>0)
{
rem=n%b;
n=n/b;
if(rem > 9 && rem < 16)
arr[i++]=rem-10+'A';
else
arr[i]=rem+'0';
i++;
}
for(j=i-1;j>=0;j--)
{
printf("%c",arr[j]);
}
printf("\n");

}
