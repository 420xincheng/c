/*编写一个函数，用来将一个二维数组（M×N）转置，在主函数中输入一个二维数组。
*/
#define N 3
#define M 4
#include <stdio.h>
void main()
{
	void trans(int a[][N],int b[][M]);
	int i,j,x[M][N],y[N][M];
	printf ("请输入一个%d×%d的二维数组：\n",M,N);
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
			scanf("%d",&x[i][j]);
	trans(x,y);
	printf ("转置后的矩阵为：\n");
	for (i=0;i<N;i++){
		for (j=0;j<M;j++)
			printf ("%d ",y[i][j]);
	printf ("\n");
	}
}
void trans(int a[][N],int b[][M])
{
	int i,j;
	
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
			b[j][i]=a[i][j];

}