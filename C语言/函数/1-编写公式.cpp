/*求S=1+(1+√ 2)+(1+√2+√3)+...+(1+√2+√3+...+√n)
*/
#include <stdio.h>
#include <math.h>
double fun(int n)
{
	int i;
	double sum=0;
	for (i=1;i<=n;i++)
		sum = sum+sqrt(double(i));
	return sum;
}
double sum(int m)
{
	int j;
	double s=0;
	for (j=1;j<=m;j++)
		s=s+fun(j);
	return s;
}
void main ()
{
	int n;
	printf ("请输入n的值：");
	scanf ("%d",&n);
	printf ("S=%lf\n",sum(n));
}