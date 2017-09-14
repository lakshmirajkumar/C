#include<stdio.h>

	union x
        	  {
                struct y{
                        int a;
                        int b;
                        }x1;
             }y1;

main()
{
	printf("%d\n",sizeof(union x));
	printf("%d\n",sizeof(struct y));


}
