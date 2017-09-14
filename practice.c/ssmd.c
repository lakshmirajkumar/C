#include <math.h>
#include <stdio.h>
main()
{
int x;
int y;
int a,b,c,d,e;

printf ("enter the value of x:\n");
scanf ("%d", &x);
printf ("enter the value of y:\n");
scanf ("%d", &y);
a=x+y;
b=x-y;
c=x*y;
d=x/y;
e=x%y;
printf ("the results of %d and %d are\nsum is %d\nsub is %d\nmul is %d\ndiv is %d\nrem is %d\n", x,y,a,b,c,d,e);
}
