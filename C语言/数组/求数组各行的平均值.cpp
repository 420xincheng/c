//����һ��M��N�Ķ�ά���飬���������е�ƽ��ֵ���������ŵ�һ��һά�����С�

#define M 3 
#define N 4
#include <stdio.h>
void main ()
{
	int i,j;
	float a[M][N],b[M],sum;
	printf ("������%d �� %d�ľ���\n",M,N);
	for (i=0;i<M;i++){
		sum = 0;
		for (j=0;j<N;j++){
			scanf ("%f",&a[i][j]);
			sum = sum +a[i][j];				//�������i�е�ͬʱ���
		}
		b[i] = sum/N;					//���ò�˵�����գ���ÿ�е�ƽ��ֵ����һά������
	}
	for (i=0;i<M;i++)
		printf ("%7.2f",b[i]);
}