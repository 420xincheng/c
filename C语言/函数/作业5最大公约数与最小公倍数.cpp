/*写两个函数，分别求两个整数的最大公约数和最小公倍数，
用主函数调用这两个函数，并输出结果。
两个整数由键盘输入，如果输入的数中包含负数，则输出Input Error。
*/

#include <stdio.h>
void main ()
{
	int max (int m,int n);
	int min (int m,int n);
	int a,b;
	scanf ("%d %d",&a,&b);
	if (a<0 || b<0)
		printf ("Input Error\n");
	else
		printf ("%d %d\n",max(a,b),min(a,b));
}
int max(int m,int n)
{
	int k;
	while (1)
	{
		k=m%n;
		if (k==0)
			return n;
		else 
		{
			m=n;
			n=k;
		}
	}
}
int min (int m,int n)
{
	int x,min;
	x=m*n;
	min=x/max(m,n);
	return min;
}