
#include <stdio.h>
#define M 3
#define N 4
void main ()
{
	int a[M][N],b[N][M],i,j;
	printf ("���������\n");
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
		{
			scanf ("%d",&a[i][j]);
			b[j][i]=a[i][j];			//����ת��
		}
		printf("ת�þ���\n");
		for (i=0;i<N;i++)
		{
			for (j=0;j<M;j++)
				printf ("%6d",b[i][j]);
			printf ("\n");
		}
}