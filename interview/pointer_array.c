#include<stdio.h>
main(){
	int a[2];
	int *p;
	printf("array:%d pointer:%d\n",sizeof(a),sizeof(p));
	printf("array address:%p, pinter address:%p\n",&a[0],&p);
	p++; //we can increment the pointer 
	a++; //we can't increment the array
}
