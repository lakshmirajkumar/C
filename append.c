#include <stdio.h>
#include <stdlib.h>
char s[] = {"\naaaaaaaaaa"};
int main(void)
{
FILE *file = fopen("test.txt", "a");
fputs("\nHallo World",file);
fputs(s,file);
 
 
fclose(file);
 
//system("PAUSE");
return 0;
}
