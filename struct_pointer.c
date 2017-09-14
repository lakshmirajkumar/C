#include <stdio.h>
#include <string.h>
 
struct student 
{
     int id;
     char name[30];
     float percentage;
};
 
int main() 
{
     int i;
     struct student record1 = {1, "Raju", 90.5};
     struct student *ptr;
     char name1[30]; 
     ptr = &record1;     
     printf("  Name is: %s \n", ptr->name);
     strcpy(name1, ptr->name);
     printf("name1:%s\n",name1);
     return 0;
}
