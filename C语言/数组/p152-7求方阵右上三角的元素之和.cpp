
#define n 3
#include <stdio.h>
void main ()
{
	int i,j,x,sum=0;		//x��ʾ����
	int a[n][n];
	printf ("�����뷽���������");
	scanf ("%d",&x);
	printf ("�����뷽��\n");
	for (i=0;i<x;i++)
		for (j=0;j<x;j++)
			scanf ("%d",&a[i][j]);
	for (i=0;i<x;i++)
		for (j=i;j<x;j++)
			sum = sum+a[i][j];
	printf ("sum = %d\n",sum);


}