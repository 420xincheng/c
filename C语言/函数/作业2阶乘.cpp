/*编写一个函数f()，用来求n！的值。在主函数中输入两个正整数a和b，调用函数f()，
求a!+b!的值，并输出结果。*/

#include <stdio.h>
void main ()
{
	int f(int n);
	int a,b,sum;
	scanf ("%d %d",&a,&b);
	sum = f(a)+f(b);
	printf ("%d\n",sum);
}

int f(int n)
{
	int k=1;
	for (int i=1;i<=n;i++)
		k=k*i;
	return k;
}