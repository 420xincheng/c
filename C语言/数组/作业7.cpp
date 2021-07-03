/*采用冒泡法将十个数按从大到小的顺序进行排列，要求数组的大小采用#define命令设置。
*/

#define N 10
#include <stdio.h>
void main ()
{
	int x[N],i,j,t;
	for (i=0;i<N;i++)
		scanf ("%d",&x[i]);
	for (i=1;i<=N-1;i++)
		for (j=0;j<N-i;j++)
			if (x[j]<x[j+1])
			{
				t  = x[j];
				x[j] = x[j+1];
				x[j+1] = t;																																			
			}
		for (i=0;i<N;i++)
			printf ("%-d ",x[i]);
}
