/*����n��m��ֵ���Լ�һ�� n��m�ľ����ҳ�ÿ��������Ԫ�ز�����е� 1�е�Ԫ�ؽ��н��������������ľ���
*/
#define N 100
#include <stdio.h>
void main ()
{
	int a[N][N],m,n,flag=0;
	int i,j,t,max;
	scanf ("%d%d",&n,&m);
	for (i=0;i<n;i++)
	{
		max=0;
		for (j=0;j<m;j++)
			scanf ("%d",&a[i][j]);
		for (j=1;j<m;j++)	
			if (a[i][max]<a[i][j])
			{
				max=j;
				flag=1;
			}
		if (flag==1)
		{
			t        =  a[i][0];
			a[i][0]  =  a[i][max];
			a[i][max]=  t;
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++)
			printf ("%d ",a[i][j]);
		printf ("\n");
	}
}

//max=0.Ҫ����ѭ���ڣ���Ȼ����һ�������ʱ������maxû����0��Ҳ��ִ�н�������һ�������³���