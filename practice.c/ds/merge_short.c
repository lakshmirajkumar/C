#include<stdio.h>
main()
{
int a[20],b[20],c[20],i,j,k,p,q;
printf("enter the size of the 1st array \n");
scanf("%d",&p);
printf("enter the size of the 2nd array \n");
scanf("%d",&q);

printf("enter the 1st array elements in sorted order \n");
for(i=0;i<p;i++)
scanf("%d",&a[i]);

printf("enter the 2nd array elements in sorted order \n");
for(j=0;j<q;j++)
scanf("%d",&b[j]);

i=j=k=0;
	while(i<p && j<q)
	{
		if(a[i]<=b[j])
		{
		c[k]=a[i];
		i++;
		}
		else
		{
		c[k]=b[j];
		j++;
		}
		k++;
	}
	while(i<p)
	{
	c[k]=a[i];
	i++;
	k++;
	}
	while(j<q)
	{
	c[k]=b[j];
	j++;
	k++;
	}
printf("after sorting the array \n");
for(k=0;k<(p+q);k++)
printf("%d \n",c[k]);
}
