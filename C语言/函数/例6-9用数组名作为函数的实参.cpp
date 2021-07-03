//将小写字母转化成大写字母输出

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
	printf ("请输入一个字符串：");
	gets(a);
	change(a);
	printf ("调用后数组a的值：");
	puts(a);
}
/*
			请输入一个字符串：hello123
			调用后数组a的值：HELLO123
*/