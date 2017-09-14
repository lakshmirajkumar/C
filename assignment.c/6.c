//littile endian to big endian
#include<stdio.h>
main()
{
int y,x=0x45673136;
y=((x>>24)|(x<<24)|((x>>8)&0xff00)|((x<<8)&0xff0000));
printf("%x\n %x\n",x,y);




}
