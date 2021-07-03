/*编写f()函数，用来求n个a（即aa...a的值）在主函数中输入两个正整数a和n,
调用f()，求a + aa + aaa +......+aa...a(n个a)的值，输出result。
*/

#include <stdio.h>
int f(int a,int n)
{
	int sum=0,k=a,i;
	for (i=1;i<=n;i++)
	{
		sum = sum+k;
		k = k*10+a;
	}
	return sum;
}
void main ()
{
	int a,n;
	printf("请输入a和n的值：");
	scanf ("%d %d",&a,&n);
	printf ("sum=%d\n",f(a,n));
}