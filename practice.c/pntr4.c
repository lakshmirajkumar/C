#include<stdio.h>
#include<string.h>
main()
{
int i,j=0;
char *a[30]={"raj kumar","narasimha murthy"};
for(i=0;a[i]!='\0';i++)
{
for(j=0;*(a[i]+j)!='\0';j++)
{
printf("%c",*(*(a+i)+j));
}
printf("********\n");

}




}
