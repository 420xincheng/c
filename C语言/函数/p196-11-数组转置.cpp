/*��дһ��������������һ����ά���飨M��N��ת�ã���������������һ����ά���顣
*/
#define N 3
#define M 4
#include <stdio.h>
void main()
{
	void trans(int a[][N],int b[][M]);
	int i,j,x[M][N],y[N][M];
	printf ("������һ��%d��%d�Ķ�ά���飺\n",M,N);
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
			scanf("%d",&x[i][j]);
	trans(x,y);
	printf ("ת�ú�ľ���Ϊ��\n");
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