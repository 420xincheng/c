
#include <stdio.h>
void main ()
{
	void f();
	int i=2,k=8;
	{
		int k=1;			//��������еı���k
		k = k+1;
		printf ("���������k=%d\n",k);
	}
	k = k+i;
	printf ("���������k=%d\n",k);
	f();
}

void f()
{
	int k=5;
	printf ("f()��k=%d\n",k);
}