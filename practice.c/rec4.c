#include<stdio.h>
void convertion (int num,int base);
main()
{
int num;
printf("enter the number...:");
scanf("%d",&num);
convertion (num,2);
printf("\n");
convertion (num,8);
printf("\n");
convertion (num,16);
printf("\n");
return 0;
}
void convertion (num ,base)
{
int rem;
if(num==0)
return 0;
rem =num%base;
convertion (num/base ,base);
if(rem<10)
printf("%d",rem);
else
printf("%c",rem-10+'A');

}
