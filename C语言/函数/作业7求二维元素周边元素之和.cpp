/*���д����fun()��
�����Ĺ����ǣ����ĳ����ά���飨��5��5�У����ܱ�Ԫ��ֵ֮�ͣ���Ϊ����ֵ���ء�
�����������£�
#define N 10
int fun(int a[N][N], int n)
���룺
��һ��Ϊһ������n����������ά����
�ڶ��п�ʼΪ��ά���鸳ֵ��
�����
�ܱ�Ԫ��֮�͡�
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