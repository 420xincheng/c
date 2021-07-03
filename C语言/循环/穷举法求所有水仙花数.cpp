//水仙花数是一个三位数的正整数，153=1^3+5^3+3^3,用穷举法求出所有的水仙花数。(用三重循环)

#include <stdio.h>
void main ()
{
	int x,g,s,b;			//g,s,b分别用于储存个位，十位，百位的值
	for (b=1;b<10;b++)
		for (s=0;s<10;s++)
			for (g=0;g<10;g++)
			{
				x = b*100+ s*10+ g;
				if (x==b*b*b+s*s*s+g*g*g)
					printf ("%5d",x);
			}
}