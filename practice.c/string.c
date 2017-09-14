#include<stdio.h>
main()
{
int i,j;
char name[10]="raj";
char name1[10]="kumar";
char name2[30];
strcat(name,name1);
strcpy(name2,name);
printf("%s\n",name2);
i=strlen(name2);
printf("%d\n",i);
if(strcmp(name,"rajkumar")==0)
printf("hi raj kumar\n");
else
printf("u r not my user\n");
}


