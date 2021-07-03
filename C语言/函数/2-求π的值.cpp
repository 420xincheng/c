/*    π/2 = 1+1/3+(1×2)/(3×5)+(1×2×3)/(3×5×7)+...+(1×2×3×...×n)/(3×5×7×...×(2n-1))
*/

#include <stdio.h>
double pai(double ex)
{
	double pi=1,s=1,n=1,t;
	while (s>=ex)
	{
		t = n/(2*n+1);
		s = s*t;			//下一项的值
		pi = pi+s;
		n++;
	}
	pi = pi*2;
	return pi;
}
void main ()
{
	double ex;
	printf ("请输入精度：");
	scanf ("%lf",&ex);
	printf ("π=%lf\n",pai(ex));
}