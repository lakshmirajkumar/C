#include<stdio.h>
main()
{
int arr[20],i,j,size,temp;

printf("enter the size of the array \n");
scanf("%d",&size);

printf("enter the array elements \n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);

for(i=1;i<size;i++)
{
temp=arr[i];
for(j=i-1;arr[j]>temp && j>=0;j--)
{
arr[j+1]=arr[j];
}
arr[j+1]=temp;
}

printf("after sorting array \n");
for(i=0;i<size;i++)
printf("%d \n",arr[i]);
}
