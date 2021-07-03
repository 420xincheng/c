/* 求二维数组的最小值
*/
#define N 3
#define M 4
#include <stdio.h>
void main ()
{
	int min(int x[M][N],int a,int b);
	int m,n;
	int i,j,a[M][N];
	scanf ("%d %d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf ("%d",&a[i][j]);
	printf ("min=%d\n",min(a,m,n));
}
int min(int x[M][N],int m,int n)
{
	int a=0,b=0;
	int i,j;
	
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			if (x[a][b]>x[i][j])
			{
				a=i;
				b=j;
			}
	return x[a][b];
}