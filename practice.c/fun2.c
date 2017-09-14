#include<stdio.h>
void drawline (void);
int main(void)
{
drawline();
return 0;
}
void drawline()
{
int x;
while(1)
{
printf("enter the charecter\n");
scanf("%d",&x);
switch(x)
{
case 1:
printf("good\n");
break;
default:
printf("bad\n");
break;
}
}
}
