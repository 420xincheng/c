#include <stdio.h>
void main ()
{
	int i=1;
	double e=1,s=1;
	do
	{
		s = s*i;
		e = e + 1/s;
		i++;
	}while (1/s >= 1e-5);
	printf ("e=%lf\n",e);
}