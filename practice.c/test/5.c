#include<stdio.h>
int arr_sum(int arr[],int n,int sum);
int main()
{
  int arr[10];
  int sum,i;
  printf("enter the array elements\n");
 for(i=0;i<9;i++)
  {
  scanf("%d",&arr[i]);
  }
  sum = arr_sum(arr,10,0);
  printf("\nsum is:%d\n",sum);
  return 0;
}
 int arr_sum( int arr[], int n, int sum )
{ 
        if (n < 0) 
	{
         return sum;
	}
	if(arr[n]%2==0)	
	{
         sum += arr[n];
	}
    return arr_sum(arr, --n, sum);
}

