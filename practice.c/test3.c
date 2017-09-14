#include <stdio.h>
struct test1

{

 int x: 1;

 int y: 4;

 int z: 4;

};

int main()

{

printf("Size of test1 is %d bytes\n", sizeof(struct test1));

return 0;

}
