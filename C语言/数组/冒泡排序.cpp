//从键盘输入N个整数，采用冒泡法将这N个数从小到大的顺序排序。
//若有N个数，最多经过N-1趟完成排序；第i趟排序中两两比较的次数为N-i.so用二重循环来实现
//标志量的存在防止了当输入数据有顺序时的多次重复执行循环体。

#define N 6
#include <stdio.h>
void main ()
{
	int x[N],i,j,t;
	int change = 1;						//定义标志量
	printf ("请输入%d个数据：",N);
	for (i=0;i<N;i++)
		scanf ("%d",&x[i]);
	for (i=1;i<=N-1 && change==1;i++)	//控制趟数，每趟检测标志量
	{
		change=0;						//若此趟没有进行数据交换，则change=0
		for (j=0;j<N-i;j++)				//控制每一趟的比较次数
			if (x[j]>x[j+1])			//两两比较，较大者往后移
			{
				     t = x[j];
				  x[j] = x[j+1];
				x[j+1] = t;
				change = 1;				//本趟进行了数据交换，change为1
			}
	}
			printf ("排序结果为：");
			for (i=0;i<N;i++)
				printf ("%5d",x[i]);
}