#include <stdio.h>
static int i=10;
int main(){
   // i=5;
    for(;i<12;i++){
         static int a=10; //This statement will execute
                          //only time.
         printf("%d ",a++);//This statement will execute
                          //five times.
    }  
	printf("\n%d",i);
    return 0;
}
