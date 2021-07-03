
#include <stdio.h>
int a=66,b=11;
int max(int x,int y)
{
	int c;
	if (x>y)
		c=x;
	else
		c=y;
	return c;
}

void main ()
{
	int a=88;						//a为局部变量
	printf ("max=%d\n",max(a,b));
}
//局部变量a优先