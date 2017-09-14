#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char a[10],x;
printf("enter the string:");
gets(a);
printf("enter the character you want to check:");
scanf("%c",&x);
for(i=0; a[i]!=x;i++)
{
}
printf("%d\n",i+1);
for(j=i+1;a[j]!=x;j++)
{

}

printf("%d\n",j+1);
}
