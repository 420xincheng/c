/*����10��������ͬ�����������浽�����У��ҵ����Ԫ�ز�ɾ���������ɾ��������顣
*/

#include <stdio.h>
void main ()
{
	int a[10],i,max=0;
	for(i=0;i<10;i++)
		scanf ("%d",&a[i]);
	for (i=1;i<10;i++)
		if (a[max]<a[i])
			max=i;
	for (i=max;i<10;i++)
		a[i]=a[i+1];
	for (i=0;i<9;i++)
		printf ("%d ",a[i]);
}