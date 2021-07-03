
#include <stdio.h>
#include <string.h>
void main ()
{
	char a[20];
	int i;
	printf ("请输入字符串：");
	gets(a);
	for (i=strlen(a)-1;i>=0;i--)			//从字符串的末尾-1开始输出
		printf ("%c",a[i]);
}