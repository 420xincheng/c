//输入一个3×3矩阵，输出主对角线上元素之和

#include <stdio.h>
void main ()
{
	int x[3][3],i,j;
	int sum=0;
	printf ("请输入9位数：");
	for  (i=0;i<3;i++)
		for  (j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
			if (i==j)
				sum = sum+x[i][j];
		}
		printf ("sum=%d\n",sum);
}