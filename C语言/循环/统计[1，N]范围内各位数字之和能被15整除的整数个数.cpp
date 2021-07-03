/*从键盘输入N，统计[1，N]范围内各位数字之和能被15整除的整数个数。
例如：78的各位数字之和是：7+8=15，则78是一个各位数字之和能被15整除的整数。

*/

#include <stdio.h>
void main ()
{
	int N,k=0,i,val,sum;
	scanf ("%d",&N);
	
	for (i=1;i<=N;i++)
	{
		val=i;				//防止i 的值改变，因为while循环结束后，i的值始终为0
		sum=0;				//每一轮的sum都要清0
		while(val)
		{
			sum = sum+val%10;
			val /= 10;
		}
		if (sum%15==0)
			k++;
	}
	printf ("%d\n",k);
}