/*��Ŀ����:����n��n<100����ֵ���Լ�n����С����������������У�������һ�������ҵ�����m��ʹ�ö��ַ����в��Ҹ�������š�
���Ҫ��
���룺��һ��Ϊ���� n���ڶ��а��� n���������Կո�ָ���������Ϊ���� m��
���������ܹ����������ҵ����� m����������ţ���Ŵ�1��ʼ��������ڶ����ţ��򷵻ر����С�ģ���������� None��
*/
#define M 100
#include <stdio.h>
void main ()
{
	int n,a[M],m,i;
	int pos=-1;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d ",&a[i]);
	scanf ("%d",&m);
	int low=0,high=n-1;
	while (low<=high)
	{
		int middle=(high+low)/2;
		if (a[middle]==m)
		{
			pos = middle+1;
			break;
		}
		else if (a[middle]>m)
			high = middle-1;
		else
			low = middle+1;
	}
	if (pos!=-1)
		printf ("%d\n",pos);
	else
		printf ("None\n");
}