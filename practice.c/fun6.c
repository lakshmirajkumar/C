#include<stdio.h>
long int factorial (long int n);
main()
{
long int n;
printf("enter the number :");
scanf("%ld",&n);
printf("factorial of given number is: %ld\n",factorial (n));
return 0;
}
long int factorial (long int n)
{
int i;
long int sum=1;
for (i=1;i<=n;i++)
sum*=i;

return sum;

}
