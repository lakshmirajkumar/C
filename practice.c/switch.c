#include <math.h>
#include <stdio.h>
main()
{
char c;
printf ("enter the letter:");
scanf ("%c", &c);
switch (c)
{
case 'y':
printf ("welcome\n");
break;
case 'n':
printf ("good bye\n");
break;
default:
printf ("wrong letter\n");
break;
}
}
