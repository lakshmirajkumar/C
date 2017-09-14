#include<stdio.h>
main()
{
int k[30][30];
int n,i,j;
printf("enter the n value:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	k[i][j]= i*j;
	}
}
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	printf(" %d  ",k[i][j]);
	}
printf("\n");
}
}
