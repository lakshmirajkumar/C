#include<stdio.h>
void func (int x);
int y=10;
main()
{
int x=20;
func (x);
func (x);
func (x);
return 0;
}
void func (int x)
{
static int z=10;
printf("%d %d %d\n",x,y,z);
z++;
x++;
}
