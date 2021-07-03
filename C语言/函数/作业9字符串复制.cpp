/*字符串复制
编写函数将源字符串 s（长度小于 20）中所有位于奇数位置的字符或ASCII码为偶数的字符放入目标字符串 t中。 
并在主函数中输出目标字符串。
*/
#include <stdio.h>
#include <string.h>
char fun(char s[20])
{
	char t[20];
	int i,n,j=0;
	n=strlen(s);
	for (i=0;i<n;i++)
		if (i%2==1 || s[i]%2==0)
		{
			t[j]=s[i];
			j++;
		}
	t[j]='\0';
		puts(t);
}
void main()
{
	char s[20];
	scanf ("%s",s);
	
	fun(s);
}
//可以把函数定义为void，然后在main中输出，void fun(char a[],char d[])........main {.....puts(d)}