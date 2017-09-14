#include<stdio.h>
main()
{
int a[10][10],b[10][10],r[10][10];
int i,j,k,c1,r1,c2,r2,sum=0;
printf("enter the rows and coloms of an 1st matrix:\n");
scanf("%d %d",&c1,&r1);
printf("enter the rows and coloms of an 2nd matrix:\n");
scanf("%d %d",&c2,&r2);
if(r1==c2)
{
printf("enter elements of 1st matrix\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("enter elements of 2nd matrix\n");
	for(i=0;i<c2;i++)
	{
		for(j=0;j<r2;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
//multilication
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r2;j++)
		{
		sum=0;
			for(k=0;k<r2;k++)
			{
			sum=sum+a[i][k]*b[k][j];
			}
			r[i][j]=sum;
		}
	}
printf("the resultent matrix is:\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r2;j++)
		{
		printf("%d ",r[i][j]);
		}
		printf("\n");
	}
}
else
printf("multiplication is not possible\n");
}
