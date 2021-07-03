//从键盘输入一个字符，如果是小写字母，则转换为大写字母输出；若为大写则转化为小写输出，其他字符原样输出。

#include <stdio.h>
void main ()
{
	char a,b;
	printf ("请输入一个字符：");
	a=getchar();
	if (a>='a' && a<='z')
		b=a-32;
	else if (a>='A' && a<='Z')
		b=a+32;
	else 
		b=a;
	putchar(b);
}