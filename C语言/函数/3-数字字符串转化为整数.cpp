 /*编写函数，将一个数字字符串转化为一个整数（不能调用C语言中将字符串转化成整数的库函数）
 */
#include <stdio.h>
#include <string.h>
int fun(char p[])
{
	int s=0,t,i=0,j;
	int n=strlen(p);
	if (p[0]=='-')
		i++;
	for (j=i;j<=n-1;j++)
	{
		t = p[j]-'0';
		s = s*10+t;
	}
	if (p[0]=='-')
		return -s;
	else
		return s;
}
void main ()
{
	char s[6];
	int n;
	printf ("请输入一个字符串：");
	gets (s);
	n = fun(s);
	printf ("result=%d\n",n);
}
