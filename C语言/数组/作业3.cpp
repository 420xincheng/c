/*�Ӽ�������n��ֵ(n<10)��������n��������һά�����У�����n�����������ŵ��������У��������
*/

#define M 10
#include <stdio.h>
void main ()
{
	int n,i,a[M],b[M],j=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf ("%d",&a[i]);
	for (i=n-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for (i=0;i<n;i++)
		printf ("%2d",b[i]);
}