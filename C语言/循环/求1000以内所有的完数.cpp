//完数：这个数恰好等于除它本身外所有因子之和。for example:6=1+2+3  求1000以内的所有完数。

#include <stdio.h>
void main ()
{
	int i,j,k;
	for (i=1;i<=1000;i++)			//检测1-n之间所有数
	{
		k=0;
		for (j=1;j<i;j++)
			if (i%j==0)				//求所有因子之和
				k = k+j;
		if (i==k)					//是完数
			printf ("%5d ",i);
	}
}