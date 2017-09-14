#include<stdio.h>
int main()
{
int a[10][10];
int b[10][10];
int r[30][30];
int s[30][30];
int r1,c1,r2,c2,i,j;
printf("plese enter the rows and coloums of first matrix\n");
scanf("%d %d",&r1,&c1);
printf("plese enter the rows and coloums of second matrix\n");
scanf("%d %d",&r2,&c2);
if(r1==r2 && c1==c2)
{
printf("enter the elements of 1st matrix:\n");
	for(i=0;i<c1;i++)
	{	
		for(j=0;j<r1;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("enter the elements of 2nd matrix:\n");
	for(i=0;i<c2;i++)
	{
		for(j=0;j<r2;j++)
		{
		scanf("%d",&b[i][j]);
		}

	}
printf("the addition matrix is:\n");

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{

		r[i][j]=a[i][j]+b[i][j];
		printf("%d\t",r[i][j]);
		}
	printf("\n");
	}	
	printf("\n");

printf("the subtraction matrix is:\n");

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		s[i][j]=a[i][j]-b[i][j];
		printf("%d\t",s[i][j]);
		}
	printf("\n");
	}	
	printf("\n");
}
else
printf("oparation is not possible\n");
return 0;
}
