/*编写power()函数，求n^k的值，输入n和k的值，调用power函数，求1^k+2^k+3^k+...+n^k的值，并输出。
*/
#include <stdio.h>
int power(int n,int k)
{
	 int a=1,i;
	 if (k!=0)
		 for (i=1;i<=k;i++)
			 a = a*n;
	 return a;
}
void main ()
{
	int sum=0,j;
	int k,n;
	printf("请输入n和k的值：");
	scanf("%d %d",&n,&k);
	for (j=1;j<=n;j++)
		sum = sum+power(j,k);
	printf ("sum=%d\n",sum);
}