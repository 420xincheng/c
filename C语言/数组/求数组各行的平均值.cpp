//输入一个M×N的二维数组，求该数组各行的平均值，将其结果放到一个一维数组中。

#define M 3 
#define N 4
#include <stdio.h>
void main ()
{
	int i,j;
	float a[M][N],b[M],sum;
	printf ("请输入%d × %d的矩阵：\n",M,N);
	for (i=0;i<M;i++){
		sum = 0;
		for (j=0;j<N;j++){
			scanf ("%f",&a[i][j]);
			sum = sum +a[i][j];				//在输入第i行的同时求和
		}
		b[i] = sum/N;					//不得不说，妙哉！求每行的平均值放入一维数组中
	}
	for (i=0;i<M;i++)
		printf ("%7.2f",b[i]);
}