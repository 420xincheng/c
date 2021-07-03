#include <stdio.h>
#include <math.h>

int main ()
{
	double sum=0,pi,c=1,s=1;
	int n=1;
	while (fabs(c)>=1e-6)
	{
		sum = sum +c;
		s = -s;
		n++;
		c = s/(2*n-1);
		
	}
	pi = sum*4;
	printf ("¦Ð=%lf\n",pi);

	return 0;
}