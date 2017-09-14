#include<stdio.h>
#include<string.h>
main()
{
int *p,i;
int a[10];
for(i=0;i<10;i++)
{
printf("enter the %d value:",i);
scanf("%d",&a[i]);

}
printf("{");
for(p=&a[0];p<&a[10];p++)

{
printf("%d ",*p);
}
printf("}\n");

}
