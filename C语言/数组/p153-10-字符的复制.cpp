//���ַ�s2�е�ȫ���ַ����Ƶ�����s1�У�Ҫ�󲻵���strcpy����

#include <stdio.h>
#include <string.h>
void main ()
{
	char s1[20],s2[20];
	int i;
									//gets (s1);
	gets (s2);
	for (i=0;i<strlen(s2);i++)
		s1[i] = s2[i];
		s1[i] = '\0';
	puts (s1);

	
}