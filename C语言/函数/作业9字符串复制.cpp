/*�ַ�������
��д������Դ�ַ��� s������С�� 20��������λ������λ�õ��ַ���ASCII��Ϊż�����ַ�����Ŀ���ַ��� t�С� 
���������������Ŀ���ַ�����
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
//���԰Ѻ�������Ϊvoid��Ȼ����main�������void fun(char a[],char d[])........main {.....puts(d)}