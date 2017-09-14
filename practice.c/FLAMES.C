#include<stdio.h>
#include<string.h>
main()
{
int total=0,i,j,t=0,x,y;
char a[20],b[20];
printf("enter the 1st name\n");
scanf("%s",a);
printf("enter the 2nd name\n");
scanf("%s",b);
x=strlen(a);
y=strlen(b);
printf(" %d %d total count is:%d",x,y,total=(x+y));
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
if(a[i]=b[j])
{
total-=2;
break;
}
}
}
t=total;
printf("\n %d",t);
if(t==2 || t==4 || t==7 ||t==9 )
printf(" \nENEMY \n");
else if (t==3 || t==5 || t==14)
printf("\nFRIEND \n");
else if(t==6 || t==11 || t==15 )
printf(" \nMARRY \n");
else if(t==10)
printf(" \nLOVE  \n");
else if(t==8)
printf("\nAFFECTION \n");
else
printf(" \nSISTERS/BROTHERS \n");

}
