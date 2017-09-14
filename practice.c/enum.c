#include <stdio.h>
enum week{ sunday=1, monday, tuesday=10, wednesday, thursday, friday, saturday};
int main(){
    enum week today;
    today=monday;
    printf("%d day \n",today+1);
    return 0;
   }
