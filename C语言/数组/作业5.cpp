/*从键盘输入一个字符串到字符数组中，将其中的小写英文字母复制到另外一个字符数组中并输出。
*/
#include <string.h>
#include <stdio.h>
void main ()
{
	char a[100],b[100];
	int i,j=0,m;
	gets(a);
	m=strlen(a);
	for (i=0;i<m;i++)
		if (a[i]>='a' && a[i]<='z')
		{
			b[j]=a[i];
			j++;
		}
	b[j]='\0';
	
	puts(b);
}

//注意一定要有b[j]='\0',这一项，因为字符数组必须以‘\0’结束，才能采用字符串输出函数进行输出。