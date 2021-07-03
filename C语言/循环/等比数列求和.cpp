//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时共经过多少米？反弹多高？结果保留两位小数。

#include <stdio.h>
#include <math.h>

void main ()
{
	
	double m,n,sum=0,h;
	scanf ("%lf %lf",&m,&n);

	sum = 2*2*m*(1-pow(0.5,n)) - m;		//等比数列求和公式
	h = m/pow (2.0,n);

	printf ("%.2lf %.2lf",sum,h);

}