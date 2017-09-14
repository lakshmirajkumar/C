#include<stdio.h>

int fun(int x)
{

return x+x;

}


int main()
{
int i=0;
for(;i<10;)
	{
	printf("numbr is \t:\t%d\n",fun(i));
	i++;
	}
	
	return 0;
}
