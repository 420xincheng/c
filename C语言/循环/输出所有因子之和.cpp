// 从键盘输入一个整数，输出它的所有因子之和(例如，6的因子为1、2、3)。
输入：6



#include <stdio.h>
void main ()
{
	int n,sum=0;
	int i;
	scanf ("%d",&n);
	for (i=1;i<n;i++)
		
			if (n%i==0)
				sum = sum + i;
	
	printf ("%d",sum);
}