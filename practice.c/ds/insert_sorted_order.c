#include<stdio.h>
main()
{
int a[5],i,number;

printf("enter the 4 elements in sorted order\n");
for(i=0;i<4;i++)
scanf("%d",&a[i]);

printf("enter the number to be inserted\n");
scanf("%d",&number);

for(i=3;number<a[i]&&i>0;i--)
a[i+1]=a[i];

a[i+1]=number;



printf("after inserting\n");
for(i=0;i<5;i++)
printf("%d \n",a[i]);
}
