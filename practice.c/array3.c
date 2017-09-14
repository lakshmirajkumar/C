#include<stdio.h>
main()
{
int a[10];
int o[10];
int e[10];
int i,j=0,k=0,b;
printf("enter the no. of elements\n");
scanf("%d",&b);
printf("enter the elements of an array\n");
for(i=0;i<b;i++)
	{
	scanf("%d",&a[i]);
	}
		for(i=0;i<b;i++)
		{
			if((a[i]%2)==0)
			{
			e[j]=a[i];
			j++;
			}
			else
			{
			o[k]=a[i];
			k++;
			}
		}
printf("even numbers array\n");
		for(i=0;i<j;i++)
		{
		printf("%d\n",e[i]);
		}

printf("odd numbers array\n");
		for(i=0;i<k;i++)
		{
		printf("%d \n",o[i]);
}
}


