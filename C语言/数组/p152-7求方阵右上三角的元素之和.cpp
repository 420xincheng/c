
#define n 3
#include <stdio.h>
void main ()
{
	int i,j,x,sum=0;		//x表示行数
	int a[n][n];
	printf ("请输入方阵的行数：");
	scanf ("%d",&x);
	printf ("请输入方阵：\n");
	for (i=0;i<x;i++)
		for (j=0;j<x;j++)
			scanf ("%d",&a[i][j]);
	for (i=0;i<x;i++)
		for (j=i;j<x;j++)
			sum = sum+a[i][j];
	printf ("sum = %d\n",sum);


}