//输入一个N×N的矩阵A，求矩阵B（=A+A'转置矩阵）

#define N 3
#include <stdio.h>
void main ()
{
	int i,j,a[N][N],b[N][N],c[N][N];
	printf ("请输入矩阵A：\n");
	for (i=0;i<N;i++)
		for (j=0;j<N;j++){
			scanf ("%d",&a[i][j]);
		}
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
				b[i][j]=a[j][i];
					c[i][j]=a[i][j]+b[i][j];
			}
		}
	for (i=0;i<N;i++){
		for (j=0;j<N;j++)
			printf ("%-7d",c[i][j]);
		printf ("\n");
	}
}