/*编写自定义函数，要求产生0-32767之间的随机整数。
在main（）函数中调用该函数产生10个随机数。
*/

#include <stdio.h>
int random()
{
	static unsigned seed=1;				//必须加static，若不加则十个随机数均相同
	seed=(seed*214013+2531011)%32768;
	return seed;
}

void main ()
{
	int i;
	for (i=0;i<10;i++)
		printf ("%d\n",random());
}