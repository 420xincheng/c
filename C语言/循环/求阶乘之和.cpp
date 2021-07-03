//输入正整数n,求1！+2！+3！+...+n!之和。

#include <stdio.h>
int main ()
{
	int i,j,n; 
	int sum=0,p;							//p保存阶乘
	printf ("请输入正整数n的值：");
	scanf ("%d",&n);

	for (i=1;i<=n;i++)
	{
		p=1;
		for (j=1;j<=i;j++)				//计算第i个数的阶乘，即i!
			p = p*j;
		sum = sum + p;					//各阶乘累加

	}
	printf ("sum=%d\n",sum);

	return 0;
}


//方法二：迭代法


#include <stdio.h>
int main ()
{
	int i,n;
	int p=1,sum=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
		{
		     p = p*i;		//求i!
		     sum = sum +p;  		//将i!加入sum中
		}
	printf ("sum=%d",sum);
	return 0;
}