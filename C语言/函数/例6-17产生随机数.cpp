/*��д�Զ��庯����Ҫ�����0-32767֮������������
��main���������е��øú�������10���������
*/

#include <stdio.h>
int random()
{
	static unsigned seed=1;				//�����static����������ʮ�����������ͬ
	seed=(seed*214013+2531011)%32768;
	return seed;
}

void main ()
{
	int i;
	for (i=0;i<10;i++)
		printf ("%d\n",random());
}