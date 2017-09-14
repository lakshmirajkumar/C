#include<stdio.h>
main()
{
int a[5],i,item,pos;

printf("enter the 4 elements \n");
for(i=0;i<4;i++)
scanf("%d",&a[i]);

printf("enter the item\n");
scanf("%d",&item);

printf("enter the position\n");
scanf("%d",&pos);

for(i=3;i>=pos-1;i--)
a[i+1]=a[i];

a[i+1]=item;

printf("after inserting element \n");
for(i=0;i<5;i++)
printf("%d \n",a[i]);

}
