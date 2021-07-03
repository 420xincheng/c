/*N×N的矩阵，求两条对角线上所有元素之和，要求每个元素只参与一次运算。
*/

#define N 3
#include <stdio.h>
void main ()
{
	int i,j,a[N][N],s;
	int sum(int b[][N]);
	printf ("请输入矩阵：\n");
	for (i=0;i<N;i++)
		for (j=0;j<N;j++)
			scanf ("%d",&a[i][j]);
	s = sum(a);
	printf ("两条对角线上的元素之和为：%d\n",s);

}

int sum (int b[][N])
{
	int i,j,s=0;
	for (i=0;i<N;i++)
		for(j=0;j<N;j++)
			if (i==j || i+j==N-1)
				s = s+b[i][j];
	return s;
}