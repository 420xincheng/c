//˳�򷨴�С��������

#define n 6
#include <stdio.h>
void main ()
{
	int x[n],i,j,t;
	printf ("���������ݣ�");
	for (i=0;i<n;i++)
		scanf ("%d",&x[i]);
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if (x[i]>x[j])
			{
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
			printf ("������Ϊ��");
			for (i=1;i<n;i++)
				printf ("%5d ",x[i]);
}