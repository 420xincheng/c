/*N��N�ľ����������Խ���������Ԫ��֮�ͣ�Ҫ��ÿ��Ԫ��ֻ����һ�����㡣
*/

#define N 3
#include <stdio.h>
void main ()
{
	int i,j,a[N][N],s;
	int sum(int b[][N]);
	printf ("���������\n");
	for (i=0;i<N;i++)
		for (j=0;j<N;j++)
			scanf ("%d",&a[i][j]);
	s = sum(a);
	printf ("�����Խ����ϵ�Ԫ��֮��Ϊ��%d\n",s);

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