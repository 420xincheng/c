/*��һά�������Сֵ
�Ӽ������� 10������������ fun�����ҳ�������С���������� main�����������
���д���� fun�������ҵ�����Сֵ
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