//�Ӽ�������һ��������n,��2~n֮�����������֮�͡�

#include <stdio.h>
#include <math.h>
void main ()
{
	int i,n,sum=0,j,k;
	printf ("������һ��������n��");
	scanf ("%d",&n);
	for (i=2;i<=n;i++)
	{
		k=sqrt ((double)i);
		for (j=2;j<=k;j++)
			if (i%j==0) break;
		if (j>k)								//	������
				sum = sum + i;
	}
		printf ("��������֮��sum=%d\n",sum);
}