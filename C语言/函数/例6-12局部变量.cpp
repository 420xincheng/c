
#include <stdio.h>
void main ()
{
	void f();
	int i=2,k=8;
	{
		int k=1;			//复合语句中的变量k
		k = k+1;
		printf ("复合语句中k=%d\n",k);
	}
	k = k+i;
	printf ("复合语句外k=%d\n",k);
	f();
}

void f()
{
	int k=5;
	printf ("f()中k=%d\n",k);
}