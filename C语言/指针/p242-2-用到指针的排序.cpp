/*��main����������10�������������У��������ݽ���������
�������е�����������һ������������С�������һ��������
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
	int *max,*min;					//��������ָ��������ֱ�ָ�����ֵ����Сֵ��
	printf ("������10��������");
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
	printf ("�����");
	for (i=0; i<10; i++)
		printf ("%d ",a[i]);
	printf("\n");
	return 0;
}
/* result:
		 ������10��������2 3 4 5 6 7 8 9 10 1
		 �����10 3 4 5 6 7 8 9 1 2
		 ��û�б����������Сֵ��ֻ�Ǳ�������Сֵԭ�еĵ�ַ
		 ���ʹ�ó�������أ�
*/
