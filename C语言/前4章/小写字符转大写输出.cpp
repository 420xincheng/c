//�Ӽ�������һ���ַ��������Сд��ĸ����ת��Ϊ��д��ĸ�������Ϊ��д��ת��ΪСд����������ַ�ԭ�������

#include <stdio.h>
void main ()
{
	char a,b;
	printf ("������һ���ַ���");
	a=getchar();
	if (a>='a' && a<='z')
		b=a-32;
	else if (a>='A' && a<='Z')
		b=a+32;
	else 
		b=a;
	putchar(b);
}