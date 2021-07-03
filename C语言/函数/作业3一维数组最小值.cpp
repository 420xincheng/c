/*求一维数组的最小值
从键盘输入 10个整数，调用 fun函数找出其中最小的数，并在 main函数中输出。
请编写函数 fun，返回找到的最小值
*/

#include <stdio.h>
void main ()
{
	int fun (int x[]);
	int i,a[10];
	for (i=0;i<10;i++)
		scanf ("%d",&a[i]);
	
	printf ("%d\n",fun(a));
}
int fun (int x[])
{
	int i,min;
	min=0;
	for (i=1;i<10;i++)
		if (x[min]>x[i])
			min=i;
	return x[min];

}