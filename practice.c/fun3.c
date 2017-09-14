#include<stdio.h>
void check (int num);
main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
check (num);
return 0;
}
void check (int num)
{
if((num%2)==0)
printf("\neven number\n");
else
printf("odd number\n");

}



