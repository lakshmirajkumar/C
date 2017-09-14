#include<stdio.h>
main()
{
int a[10],c[30];
int i,n,id,marks;
char b[20],name;
printf("enter the no. of students:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the roll.no, name & marks of %d student:\n",i);
scanf("%d %c %d",&id,&name,&marks);
a[i]=id;
b[i]=name;
c[i]=marks;
}
printf("ROLL.NO\t NAME\t MARKS\n");
for(i=1;i<=n;i++)
{
printf("  %d      %c      %d",a[i],b[i],c[i]);
printf("\n");
}
}
