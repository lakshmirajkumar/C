#include <stdio.h>
#include <string.h>

/*  Below unionure1 and structure2 are same. 
    They differ only in member's allignment */

union date
{
       unsigned int d : 4;
       unsigned int m : 5;
       unsigned int year;

};

main() 
{
char *p;
union date dob;
 printf("\n\nSize of DATE\t:\t%d\n\n",sizeof(union date));
 printf("\n\n date\t:\t%d\n\n",sizeof(dob.d));
 printf("\n\n month\t:\t%d\n\n",sizeof(dob.m));
 printf("\n\n year\t:\t%d\n\n",sizeof(dob.year));

//p=&(dob.d);

//printf("\n dob.d %d\n",*p);



// printf("\n\n day\t:\t%p\n\n",&(dob.d));

} 

