#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<unistd.h>
static int amount=10000;
main()
{
int choice,b;
printf("WELCOME TO ATM PROGRAM\n");
printf("'1' for BALANCE ENQUIRY            '2' for CASH WITHDRAWL \n");
scanf("%d",&choice);
if(choice==1)
{
printf("the balance in ur account is :   %d \n",amount);
exit (EXIT_SUCCESS);
}
if(choice==2)
{
printf("enter the amount in multiples of 100 only\n");
scanf("%d",&b);
if((b%100)==0)
{
printf("processing ur request please wait\n");
amount=amount-b;
sleep (5);
printf("collect ur cash\n");
sleep (2);
printf("remaining balance in ur account is :%d\n",amount);
printf("THANK YOU FOR USING ATM\n");
}
else
{
printf("please enter the valuable amount\n");
exit (EXIT_SUCCESS);
}
}
}
