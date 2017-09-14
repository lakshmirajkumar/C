#include<stdio.h>
main()
{
int i,j,temp,n,a[20];
printf("enter the number of element \n");
scanf("%d",&n);
printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
		for(i=n-1;i>=0;i--)
		{
			for(j=0;j<=i-1;j++)
			{
			if(a[j]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			}
		}
	printf("after sorting\n");
		for(i=0;i<n;i++)
		{
		printf("%d \n",a[i]);
		}
}
