/*从键盘输入一个M×M的矩阵，分别求该矩阵主对角线上的元素之和、以及副对角线上的元素之和。要求M的值从键盘输入，且M的值小于10。
*/
#define N 10
#include <stdio.h>
void main ()
{
	 int sum1=0,sum2=0,M;
	 int i,j;
	 scanf ("%d",&M);
	 int x[N][N];
	 for (i=0;i<M;i++)			
		 for (j=0;j<M;j++)
		 {
			 scanf ("%d",&x[i][j]);
			 if (i==j)
				 sum1 = sum1+x[i][j];
			 if (i+j ==M-1)
				 sum2 = sum2+x[i][j];
		 }
	printf ("%d\n%d\n",sum1,sum2);

}

//注意不用纠结数组不能为变量的问题，只需要i<M，M是矩阵的阶数即可，即定义的数组不用填满。