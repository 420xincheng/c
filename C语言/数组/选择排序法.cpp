/*思路：先从所有数中选一个最小数与第一个位置的数交换，第一趟结束后，最小的数在第一位；
第二趟从剩下的数中再选最小的与第二个数交换，重复。。。经过n-1趟。
*/

#include <stdio.h>
#define n 6
void main ()
{
	int x[n],i,j,min,t;					//变量min用于保存本趟最小数的下标
	printf ("请输入%d个数据：",n);
	for (i=0;i<n;i++)
		scanf ("%d",&x[i]);
	for (i=0;i<n-1;i++)
	{
		min = i;						//设x[i]是最小值
		for (j=i+1;j<n;j++)			//找出本趟的最小数
			if (x[min]>x[j])		//若x[j]比当前的min还小
				min = j;		//将当前最小数的下标保存到min中
		if (i!=min)
			//若x[i]不是最小数，就将x[min]和x[i]交换
		{
			t = x[i];
			x[i] = x[min];
			x[min] = t;
		}

	}
	printf ("排序结果为：");
	for (i=0;i<n;i++)
		printf ("%5d",x[i]);
}