
#define M 3
#define N 4
#include <stdio.h>
void main ()
{
	int i,j,k=0;			//k用来计数
	double sum=0;
	int a[M][N];
	printf("请输入%d×%d的矩阵中的元素:\n",M,N);
	for (i=0;i<M;i++)
		for (j=0;j<N;j++){
			scanf ("%d",&a[i][j]);
			if (i==0 || i==M-1 || j==0 || j==N-1){
				sum = sum + a[i][j];				//四周元素相加
				k++;			
			}
		}
		printf ("外周元素的average=%.2lf\n",sum/k);
}