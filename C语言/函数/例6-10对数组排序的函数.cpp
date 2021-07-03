/*采用冒泡法对整型数组进行从小到大排序的函数。在main中调用此函数
*/

#include <stdio.h>
void main ()
{
	int x[100],i,N;			//N为数据的个数
	void Bubblesort(int x[],int n);
	scanf ("%d",&N);
	printf ("请输入%d个数据：",N);
	for (i=0;i<N;i++)
		scanf ("%d",&x[i]);
	Bubblesort (x,N);
	printf ("排序结果为：\n");
	for (i=0;i<N;i++)
		printf ("%5d",x[i]);

}

void Bubblesort(int x[],int n)
{
	int i,j,t;
	for (i=1;i<n;i++)
		for (j=0;j<n-i;j++)		//控制每一趟的比较次数
			if (x[j]>x[j+1])
			{
				 t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		
}