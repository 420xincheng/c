//从键盘输入一个字符，如果是小写字母，则转换成大写字母输出；如果是大写字母，则转换成小写字母输出；如果是其他字符，则原样输出。

#include <stdio.h>
void main ()
{
	char a,b;
	printf ("请输入一个字符：");
	scanf ("%c",&a);
	if (a>='a' && a<='z')
		b=a-32;
	else if (a>='A' && a<='Z')
		b=a+32;
	else
		b=a;
	printf ("%c",b);
}