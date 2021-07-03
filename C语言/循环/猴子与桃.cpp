/*猴子第一天摘下若干个桃子，当即吃了一半，觉得不过瘾又多吃了一个，
以后每天都吃掉前一天剩下桃子的一半加一个，
到第10天时，就只剩下一个桃子了，求第一天摘了多少个桃子？*/


#include <stdio.h>
void main ()
{
	
	int i=1,k=1;
	do
	{
		k = (k+1)*2;
		i++;
	}while (i<10);
	printf ("sum=%d\n",k);
}


/*#include <stdio.h>
void main ()
{
	int i,x=1;					//x=1是第10天的桃子个数
	for (i=9;i>0;--i)			
		x = (x+1)*2;			//计算每天的桃子数
	printf ("第一天共摘了%d个桃子\n",x);
}
*/