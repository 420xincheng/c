/*编写函数判断一个数是否为素数，在主函数中调用该函数输出100以内的全部素数，每行输出5个数。
*/
#include <stdio.h>
void main ()
{
	int is(int m);
	int i,k=0;
	for (i=1;i<101;i++)
	{
		if (is (i))
		{
			printf ("%d ",i);
			k++;
			if (k%5==0)
				printf ("\n");
		}

	}
}
int is(int n)
{
	int i;
	for (i=2;i<n;i++)
		if (n%i==0)
			break;
	if (i==n)
		return 1;
	else
		return 0;
}