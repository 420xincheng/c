/*�Ӽ����������ɸ��ַ���ֱ��enter��Ϊֹ���ֱ�ͳ��Ӣ����ĸ���ո����ֺ������ַ��ĸ���
*/

#include <stdio.h>
void main ()
{
	char c;
	int x=0,y=0,num=0,others=0;			//

	printf ("�����������ַ���");
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