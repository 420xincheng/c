/*����һ���ַ���ͳ����ĸ�����֡��ո��Լ������ַ��ĸ�����
*/

#include <stdio.h>
int letter,digit,space,others;			//ȫ�ֱ���
void main ()
{
	char str[1000];
	void count (char ch[]);
	printf ("������һ���ַ�����<1000���ַ�����");
	gets(str);
	letter=0;
	digit=0;
	space=0;
	others=0;
	count (str);
	printf("��ĸ��%d\n���֣�%d\n�ո�%d\n������%d\n",letter,digit,space,others);

}

void count(char ch[])
{
	int i=0;
	while (ch[i]!='\0')
	{
		if ((ch[i]>='a'  &&ch[i]<='z' )|| (ch[i]>='A' && ch[i]<='Z'))
			letter++;
		else if (ch[i]>='0' && ch[i]<='9')
			digit++;
		else if (ch[i]==' ')
			space++;
		else
			others++;
		i++;
	}
}
