//��Сд��ĸת���ɴ�д��ĸ���

#include <stdio.h>
void change (char b[10])
{
	int i=0;
	while (b[i]!='\0')
	{
		if (b[i]>='a' && b[i]<='z')
			b[i] = b[i]-32;
		i++;
	}
}

void main ()
{
	char a[10];
	printf ("������һ���ַ�����");
	gets(a);
	change(a);
	printf ("���ú�����a��ֵ��");
	puts(a);
}
/*
			������һ���ַ�����hello123
			���ú�����a��ֵ��HELLO123
*/