//shifting digits
#include<stdio.h>
main()
{
int a,b,p,n,c,d;
int f=0xff,g=0xff,u=0x01,e=0x00,count=0;
printf("enter the two 8 bit numbers\n");
scanf("%d %d",&a,&b);
printf("enter the possition and number of bits\n");
scanf("%d %d",&p,&n);
	while(count<=(n-1))
	{
	e|=u;
	u=u<<1;
	count++;
	}
//printf("%d\n",e);
	b=b&e;
	for(count=0;count<=(n-1);count++)
	{
	f=g&(~(0x01<<(p-1)));
	p--;
	g&=f;
	}
	printf("%d\n",g);
	a=a&g;
	b=b<<n;
	c=a|b;
//printf("%d %d %d\n",a,b,c);
	printf("the binary output is\n");
	while(c!=0)
	{
	int d=0;
	c=c/2;
	d=c%2;
	printf("%d ",d);
	}
	printf("%d ",c);
	printf("consider the output in reverse order \n");
	//printf("output is %d",(d<<7)|((d<<5)&0x40)|((d<<3)&0x20)|((d<<1)&0x10)|(d>>7)|((d>>5)&0x02)|((d>>3)&0x04)|((d>>1)&0x08));
	//printf("\n");
}

