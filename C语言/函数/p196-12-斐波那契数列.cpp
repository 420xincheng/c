/*编写一个求Fibonacci数列某一项的递归函数，在主函数中输入n，调用自定义函数后，
输出斐波那契数列的前n项，example：0,1，1，2,3,5,8,13，...，n
*/
#include <stdio.h>
void main ()
{
    int fibo(int k);
	int n;
	int i;
	printf ("请输入n的值：");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		printf ("%d ",fibo(i));
	if(i%10==0)
		printf ("\n");}
}
int fibo(int k)				//递归
{
	int f;
	if (k==1)
		f=0;
	else if (k==2)
		f=1;
	else
		f=fibo(k-1)+fibo(k-2);
	return f;
}
/*
void main ()
{
    void fibo(int k);
	int n;
	
	printf ("请输入n的值：");
	scanf ("%d",&n);
	fibo(n);
}
void fibo(int x)
{
	int a1=0,a2=1;
	int k,i;
	int m=0;
	printf ("%d %d ",a1,a2);
	for (i=3;i<=x;i++)
	{
		k = a1+a2;
		printf ("%d ",k);
		m++;
		if (m%10==0)
			printf ("\n");
		a1=a2;
		a2=k;
	}
}
*/
//当n的值为100时，程序运行比较慢，当不运用递归时，函数输出的100个数还是有错误。