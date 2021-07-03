/*在main函数内输入10个整数到数组中，调用数据交换函数，
将数组中的最大数与最后一个数交换，最小的数与第一个交换。
*/

#include <stdio.h>
void swap(int *p,int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
int main ()
{
	int a[10],i;
	int *max,*min;					//定义两个指针变量，分别指向最大值和最小值。
	printf ("请输入10个整数：");
	for (i=0;i<10;i++)
		scanf ("%d",&a[i]);
	max = a;
	min = a;
	for (i=0; i<10; i++)
	{
		if (*max < a[i])
			max = &a[i];
		if (*min > a[i])
			min = &a[i];
	}
	swap(&a[9],max);
	swap(&a[0],min);
	printf ("排序后：");
	for (i=0; i<10; i++)
		printf ("%d ",a[i]);
	printf("\n");
	return 0;
}
/* result:
		 请输入10个整数：2 3 4 5 6 7 8 9 10 1
		 排序后：10 3 4 5 6 7 8 9 1 2
		 并没有保留最初的最小值，只是保留了最小值原有的地址
		 如何使得程序更好呢？
*/
