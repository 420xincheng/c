/*输入n和m的值，以及一个 n×m的矩阵，找出每行中最大的元素并与该行第 1列的元素进行交换，输出交换后的矩阵。
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

//max=0.要放在循环内，不然当第一个数最大时，由于max没有清0，也会执行交换的那一步，导致出错。