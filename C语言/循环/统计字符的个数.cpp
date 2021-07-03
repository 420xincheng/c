/*从键盘输入若干个字符，直至enter键为止，分别统计英文字母，空格，数字和其他字符的个数
*/

#include <stdio.h>
void main ()
{
	char c;
	int x=0,y=0,num=0,others=0;			//

	printf ("请输入若干字符：");
	while ((c=getchar())!='\n')
	{
			
			if (c>='a'&& c<='z' ||c>='A'&& c<='Z')
				x++;
			else if (c ==' ')
				y++;
			else if (c>='0' && c<='9')
				num++;
			else
				others++;
	}
	
	printf ("letters=%d  space=%d  numbers=%d  others=%d\n",x,y,num,others);
}