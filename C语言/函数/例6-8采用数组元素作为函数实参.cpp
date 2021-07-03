/*将小写字母转化成大写字母，要求采用数组元素作为实参。
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
	printf ("请输入一个字符串：");
	gets(a);
	while (a[i]!='\0')
	{
		b[i]=change(a[i]);
		i++;
	}
	b[i]='\0';
	printf ("调用函数后数组b的值：");
	puts(b);
	printf ("调用函数后数组a的值：");
	puts (a);
}
/*运行结果：
			请输入一个字符串：hello123
			调用函数后数组b的值：HELLO123
			调用函数后数组a的值：hello123
*/