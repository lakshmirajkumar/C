#include <math.h>
#include <stdio.h>
main()
{
int num;
printf ("enter the number:\n");
scanf ( "%d",&num );

if ( num > 0 )
   printf ("number is positive\n");
else 
   {
    if ( num == 0 )
   printf ("number is zero\n");
    else 
          printf ("number is negitive\n");
    }
}
