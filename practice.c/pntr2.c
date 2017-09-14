#include<stdio.h>
#include<string.h>
main()
{
int a[2][2];
int b[2][2];
int c[2][2];
int i,j,k,sum;
printf("enter the  1st matrix values:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&*(*(a+i)+j));

}
printf("\n");
}

printf("enter the 2nd matrix values:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&*(*(b+i)+j));

}
printf("\n");
}
printf("addition of given matrix is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
printf("%d  ",*(*(c+i)+j));
}
printf("\n");
}
printf("\n");
printf("subtraction of given matrix is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)-*(*(b+i)+j);
printf("%d  ",*(*(c+i)+j));
}
printf("\n");
}
printf("multiplication of givem matrix is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
sum+=*(*(a+i)+k) * *(*(b+k)+j);
}
printf("%d  ",sum);
}
printf("\n");
}
printf("division of given matrix is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
*(*(c+i)+j)=*(*(a+i)+j) / *(*(b+i)+j);
printf("%d  ",*(*(c+i)+j));

}
printf("\n");
}
printf("\n");
}
