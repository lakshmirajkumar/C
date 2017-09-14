#include<stdio.h>
#include<string.h>

main()
{
	int *p = (int *)0x7fffffffffff;
	*p = 42;

}
