#include <stdio.h>
#define n 3
void main ()
{
	int i,j,a[n][n],*q,(*p)[n];
	printf ("请输入方阵数据：\n");
	for (q = a[0]; q<a[0]+n*n; q++)		//???
		scanf ("%d",q);
	p = a;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++ )
			printf ("%-5d",p[i][j]);
		printf ("\n");
	}
}
