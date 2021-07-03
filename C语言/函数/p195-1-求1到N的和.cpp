/*求1 +2 +3 +4 +...+n 的和，在主函数中输入n的值*/

#include <stdio.h>
int sum(int n)
{
	int i;
	int sum = 0;
	for (i=1;i<=n;i++)
		sum = sum+i;
	return sum;
}

void main ()
{
	int n;
	printf("请输入n的值：");
	scanf ("%d",&n);
	printf ("sum=%d\n",sum(n));
}