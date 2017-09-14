#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,discriminent,root1,root2;
printf ("enter the values of a,b and c\n");
scanf ("%f %f %f", &a,&b,&c);
discriminent = (b*b-4*a*c);

if (discriminent < 0 ) 
printf ("\n\roots are imaginary\n");
else
{
root1 = (-b+(sqrt(discriminent)/2.0*a));
root2 = (-b-(sqrt(discriminent)/2.0*a));
printf ("\nroot1 = %f\nroot2 = %f\n", root1, root2);
}
}
