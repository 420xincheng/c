//��þ����е�����Ԫ��ֵ�Լ����Ԫ�����ڵ��С����±ꡣ

#include <stdio.h>
void main ()
{
	int a[3][4],i,j;
	int max,row=0,col=0;
	for (i=0;i<3;i++)
		for (j=0;j<4;j++)
			scanf ("%d",&a[i][j]);
	max = a[0][0];
	for (i=0;i<3;i++)
		for (j=0;j<4;j++)
			if (max<a[i][j])
			{
				max = a[i][j];
				row = i;
				col = j;
			}
			printf ("���Ԫ��ֵ��%d,���±꣺%d,���±꣺%d\n",max,row,col);
}