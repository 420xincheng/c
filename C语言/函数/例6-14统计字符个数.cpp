/*输入一行字符，统计字母、数字、空格以及其他字符的个数。
*/

#include <stdio.h>
int letter,digit,space,others;			//全局变量
void main ()
{
	char str[1000];
	void count (char ch[]);
	printf ("请输入一个字符串（<1000个字符）：");
	gets(str);
	letter=0;
	digit=0;
	space=0;
	others=0;
	count (str);
	printf("字母：%d\n数字：%d\n空格：%d\n其他：%d\n",letter,digit,space,others);

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
