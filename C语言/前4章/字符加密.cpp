//编写一个字符加密的程序，加密规则是：将字符按字母表循环向后移3位，得到的字符即为密文，循环向后移时，Z的后面是A，B,…。

#include <stdio.h>
void main()
{
	char a;
	scanf ("%c",&a);
	if (a<='T')
		a=a+3;
	else
		a=a-23;
	printf ("%c",a);
}
