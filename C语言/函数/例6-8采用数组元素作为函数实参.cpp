/*��Сд��ĸת���ɴ�д��ĸ��Ҫ���������Ԫ����Ϊʵ�Ρ�
*/

#include <stdio.h>

char change(char x)
{
	if (x>='a' && x<='z')
		x = x-32;
	return x;
}

void main ()
{
	char a[10],b[10];
	int i=0;
	printf ("������һ���ַ�����");
	gets(a);
	while (a[i]!='\0')
	{
		b[i]=change(a[i]);
		i++;
	}
	b[i]='\0';
	printf ("���ú���������b��ֵ��");
	puts(b);
	printf ("���ú���������a��ֵ��");
	puts (a);
}
/*���н����
			������һ���ַ�����hello123
			���ú���������b��ֵ��HELLO123
			���ú���������a��ֵ��hello123
*/