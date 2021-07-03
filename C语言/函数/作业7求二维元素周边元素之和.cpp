/*请编写函数fun()，
函数的功能是：求出某个二维数组（如5行5列）的周边元素值之和，作为函数值返回。
函数定义如下：
#define N 10
int fun(int a[N][N], int n)
输入：
第一行为一个整数n，代表数组维数。
第二行开始为二维数组赋值。
输出：
周边元素之和。
*/
#define N 10
#include <stdio.h>
 int fun (int a[N][N],int n)
 {
	 int sum=0,i,j;
	 for (i=0;i<n;i++)
		 for (j=0;j<n;j++)
			 if (i==0 || j==0 ||i==n-1 ||j==n-1)
				 sum = sum+a[i][j];
	 return sum;
 }

 void main ()
 {
	 int x[N][N],n;
	 int i,j;
	 scanf ("%d",&n);
	 for (i=0;i<n;i++)
		 for (j=0;j<n;j++)
			 scanf ("%d",&x[i][j]);
	 printf ("%d\n",fun(x,n));

 }