//

#include <stdio.h>
int main (void)
{
	int val;			//val是value的缩写，意为“值”，存放回文数。
	int m;
	int sum=0;

	printf ("请输入一个数字：");
	scanf ("%d",&val);
	m=val;

	while (m)
	{
		sum = sum*10 +m%10;			//m%10即取输入数据的最后一位
		m /=10;						//  while里面就是取val的倒序的数并赋值给sum
	}

	if (sum==val)
		printf ("Yes!\n");			//是回文数
	else
		printf ("No!\n");
	return 0;
}