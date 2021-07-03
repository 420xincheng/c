/*编写函数判断一个整数是否是素数，如果是，则显示“是素数”，否则显示“不是素数”。
*/

#include <stdio.h>

int isprime(int m)
{
	int i,flag=1;
	for (i=2;i<m;i++)
		if(m%i==0)
		{
			flag=0;
			break;
		}
	return flag;
}
void main ()
{
	int a,flag;
	printf ("请输入一个数：");
	scanf ("%d",&a);
	flag=isprime(a);
	if (flag==1)
		printf ("%d是一个素数\n",a);
	else
		printf ("%d不是一个素数\n",a);
}

法二：
#include<stdio.h>
int isprime(int val)			//判断是否为素数
{
	int i;
	for (i=2;i<val;i++)
		if(val%i==0)
			break;
	if (val==i)
		return 1;
	else 
		return 0;
}
//本函数的功能是把1-n之间所有的素数在显示器上输出。
void traverseval(int n)
{
	int i;
	for (i=2;i<=n;i++)
		if (isprime(i))
			printf ("%d\n",i);
}

int main ()
{
	int val;
	printf ("请输入一个整数：");
	scanf ("%d",&val);
	printf("1到%d间的素数有：\n",val);
	traverseval(val);
	return 0;
}