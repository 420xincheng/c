
#define M 3
#define N 4
#include <stdio.h>
void main ()
{
	int i,j,k=0;			//k��������
	double sum=0;
	int a[M][N];
	printf("������%d��%d�ľ����е�Ԫ��:\n",M,N);
	for (i=0;i<M;i++)
		for (j=0;j<N;j++){
			scanf ("%d",&a[i][j]);
			if (i==0 || i==M-1 || j==0 || j==N-1){
				sum = sum + a[i][j];				//����Ԫ�����
				k++;			
			}
		}
		printf ("����Ԫ�ص�average=%.2lf\n",sum/k);
}