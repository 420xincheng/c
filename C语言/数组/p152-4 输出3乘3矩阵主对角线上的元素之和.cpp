//����һ��3��3����������Խ�����Ԫ��֮��

#include <stdio.h>
void main ()
{
	int x[3][3],i,j;
	int sum=0;
	printf ("������9λ����");
	for  (i=0;i<3;i++)
		for  (j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
			if (i==j)
				sum = sum+x[i][j];
		}
		printf ("sum=%d\n",sum);
}