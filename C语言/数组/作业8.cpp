/*�Ӽ�������һ���ַ�������ѡ�񷨶Ը��ַ����е��ַ���С����������򣬲���������
*/
#include <string.h>
#include <stdio.h>
void main()
{
	char x[100];
	int n,i,j,t,min;
	gets(x);
	n=strlen(x);
	for (i=0;i<n-1;i++)
	{
		min = i;
		for (j=i+1;j<n;j++)
			if (x[min]>x[j])
				min = j;
		if (i!=min)
		{
			t  = x[i];
			x[i] = x[min];
			x[min] = t;
		}
	}
	for (i=0;i<n;i++)
		printf ("%c ",x[i]);
}