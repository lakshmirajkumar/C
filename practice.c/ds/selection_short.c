#include<stdio.h>
main()
{
int arr[20],i,j,size,min,temp;

printf("enter the size of the array \n");
scanf("%d",&size);

printf("enter the array elements \n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);

for(i=0;i<size-1;i++)
{
min=i;
for(j=i+1;j<size;j++)
{
if(arr[j]<arr[min])
min=j;
}
if(min!=i)
{
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
}
printf("after sorting the array \n");
for(i=0;i<size;i++)
printf("%d \n",arr[i]);

}
