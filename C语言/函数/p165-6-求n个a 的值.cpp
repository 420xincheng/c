/*��дf()������������n��a����aa...a��ֵ��������������������������a��n,
����f()����a + aa + aaa +......+aa...a(n��a)��ֵ�����result��
*/

#include <stdio.h>
int f(int a,int n)
{
	int sum=0,k=a,i;
	for (i=1;i<=n;i++)
	{
		sum = sum+k;
		k = k*10+a;
	}
	return sum;
}
void main ()
{
	int a,n;
	printf("������a��n��ֵ��");
	scanf ("%d %d",&a,&n);
	printf ("sum=%d\n",f(a,n));
}