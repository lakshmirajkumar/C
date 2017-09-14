#include<stdio.h>
main()
{
int a[30];
int c,i,j,d=0;
printf("enter the no. elements\n" );
scanf("%d",&c);
printf("enter the elements:\n");
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}

	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
		if(a[i]>a[j])
		{
		d=a[i];
		a[i]=a[j];
		a[j]=d;
		}
	}
}
printf("assending order of given no.\n");
for(i=0;i<c;i++)
{
printf("%d\n",a[i]);
}
}
