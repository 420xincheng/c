//求该矩阵中的最大的元素值以及最大元素所在的行、列下标。

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
			printf ("最大元素值：%d,行下标：%d,列下标：%d\n",max,row,col);
}