/*��дһ������f()��������n����ֵ��������������������������a��b�����ú���f()��
��a!+b!��ֵ������������*/

#include <stdio.h>
void main ()
{
	int f(int n);
	int a,b,sum;
	scanf ("%d %d",&a,&b);
	sum = f(a)+f(b);
	printf ("%d\n",sum);
}

int f(int n)
{
	int k=1;
	for (int i=1;i<=n;i++)
		k=k*i;
	return k;
}