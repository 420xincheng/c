/*�Ӽ�������һ���ַ������ҳ�����ASCII��ֵ��С���ַ�����������ַ���
*/

#include <stdio.h>
#include <string.h>
void main ()
{
	char a[100],min;
	int i,n;
	gets(a);
	n = strlen(a);
	min = a[0];
	for (i=0;i<n;i++)
		if (min > a[i])
			min=a[i];
	
	printf ("%c",min);
}