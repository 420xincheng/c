/*
   �Ӽ�������m��n������m��n֮�����е�����֮�͡�
*/


#include <stdio.h>
#include <math.h>
void main ()
{
	int m,n,sum=0;
	int i,j,k;
	scanf ("%d%d",&m,&n);
	for (i=m;i<=n;i++)
		{
			k=sqrt((double)i);
			for (j=2;j<i;j++)
			
				if(i%j==0)
					break;
				if (j>k)			//j>k������
					sum = sum+j;
			
	}
		printf ("%d\n",sum);
}