#include<stdio.h>
static int var4;
main()
{
	auto int var1; //defalt value garbage
	register int var2; //1) can't declare as a global
			   //2) defalt value garbage	 
	static int var3=10;   //defalut value is 0
	printf("auto:%d,register:%d,static local:%d,static global:%d\n",var1,var2,var3,var4);
}
