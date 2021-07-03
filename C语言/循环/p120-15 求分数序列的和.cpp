/*有一分数序列2/1，3/2,5/3,8/5,...,从第2项开始，每一项的分子
为前一项的分子与分母之和，每一项的分母为前一项的分子，求此数列的前n项和。
*/

#include <stdio.h>
void main ()
{
	double a=2,b=1,x,sum=0;
	int i,n;
	printf ("请输入n的值：");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum = sum + 1.0*a/b;
		x = a;
		a = a+b;
		b = x;
	}
	printf ("sum=%lf\n",sum);
}