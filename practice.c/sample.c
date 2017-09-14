#include<stdio.h>
int main(){
	int a=10;
    {
         int a=20;
         printf("%d",a);
    }
    printf(" %d",a);  //a is not visible here
    return 0;
}
