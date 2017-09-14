#include<stdio.h>
main()
{
int a[20];
int i,n;
printf("enter the no.of elements in array:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("alternate elements\n");
for(i=0;i<n;i+=2)
{
printf("%d\n",a[i]);

}
}
