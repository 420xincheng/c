/*д�����������ֱ����������������Լ������С��������
����������������������������������
���������ɼ������룬�����������а��������������Input Error��
*/

#include <stdio.h>
void main ()
{
	int max (int m,int n);
	int min (int m,int n);
	int a,b;
	scanf ("%d %d",&a,&b);
	if (a<0 || b<0)
		printf ("Input Error\n");
	else
		printf ("%d %d\n",max(a,b),min(a,b));
}
int max(int m,int n)
{
	int k;
	while (1)
	{
		k=m%n;
		if (k==0)
			return n;
		else 
		{
			m=n;
			n=k;
		}
	}
}
int min (int m,int n)
{
	int x,min;
	x=m*n;
	min=x/max(m,n);
	return min;
}