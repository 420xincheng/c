//从键盘输入一个正整数n,求2~n之间的所有素数之和。

#include <stdio.h>
#include <math.h>
void main ()
{
	int i,n,sum=0,j,k;
	printf ("请输入一个正整数n：");
	scanf ("%d",&n);
	for (i=2;i<=n;i++)
	{
		k=sqrt ((double)i);
		for (j=2;j<=k;j++)
			if (i%j==0) break;
		if (j>k)								//	是素数
				sum = sum + i;
	}
		printf ("所有素数之和sum=%d\n",sum);
}