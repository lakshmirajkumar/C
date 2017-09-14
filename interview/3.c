#include<stdio.h>

main()
{

	int *ptr="12345";
	ptr++;
	printf("%p\n",ptr);
	char arr[]="12345";
	printf("%p,%p\n",arr,arr+1);

}
