#include<stdio.h>

main()
{
char a[20][10];
char temp[20][10];
int i,j,n;
printf("enter the no.of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if((strcmp(a[i],a[j])>0))
{
strcpy(temp[i],a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],temp[i]);
}
}
}
printf("the assending order\n");
for(i=0;i<n;i++)
{
printf("%s\n",a[i]);
}
}
