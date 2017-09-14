#include<stdio.h>

int main()
{
    char* func();
    char *c;
    c = func();
    printf("%s", c);
}

char* func()
{
    char *ptr = "OK";
    return ptr;
}

