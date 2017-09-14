
//set clear and toggle
#include<stdio.h>
main()
{

int x,p,u,v,w;
printf("enter the no. you want to perform operations\n");
scanf("%d",&x);
printf("enter at which position\n");
scanf("%d",&p);
u=x|(0x01<<p); //set
v=x&~(0x01<<p); //clear
w=x^(0x01<<p); //toggle  
printf(" set bit %d\n clear bit %d\n toggle %d\n",u,v,w);






}
