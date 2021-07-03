/*从键盘输入n的值(n<10)，再输入n个整数到一维数组中，将这n个整数逆序存放到该数组中，并输出。
*/

#define M 10
#include <stdio.h>
void main ()
{
	int n,i,a[M],b[M],j=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf ("%d",&a[i]);
	for (i=n-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for (i=0;i<n;i++)
		printf ("%2d",b[i]);
}