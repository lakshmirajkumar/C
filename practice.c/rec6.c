#include<stdio.h>
int func1 (int x,int y);
main()
{
printf(" %d   \n",func1(3,8));
return 0;
}
func1(int a,int b)
{
if(a>b)
return 0;
return b+func1(a,b-1);

}
