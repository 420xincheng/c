//��׳�

#include <stdio.h>
int fac (int n)
{
	int f;
	if (n==1)
		f=1;
	else
		f = n*fac(n-1);
	return f;
}

int main ()
{
	int n,c;
	printf ("����n��ֵ��");
	scanf ("%d",&n);
	c = fac(n);
	printf ("%d!=%d\n",n,c);
	return 0;
}