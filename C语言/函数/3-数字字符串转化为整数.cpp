 /*��д��������һ�������ַ���ת��Ϊһ�����������ܵ���C�����н��ַ���ת���������Ŀ⺯����
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
	printf ("������һ���ַ�����");
	gets (s);
	n = fun(s);
	printf ("result=%d\n",n);
}
