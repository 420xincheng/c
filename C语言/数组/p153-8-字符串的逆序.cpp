
#include <stdio.h>
#include <string.h>
void main ()
{
	char a[20];
	int i;
	printf ("�������ַ�����");
	gets(a);
	for (i=strlen(a)-1;i>=0;i--)			//���ַ�����ĩβ-1��ʼ���
		printf ("%c",a[i]);
}