/*编写一个求圆柱体体积的函数f()。在主函数中输入圆柱体的底面半径和高，调用函数f()，求体积，
并输出结果，结果保留2位小数。
*/

#include <stdio.h>
double f(double r,double h)
{
	double v;
	v=3.14*r*r*h;
	return v;
}

void main ()
{
	double m,n;
	scanf ("%lf %lf",&m,&n);
	printf ("%.2lf\n",f(m,n));
}