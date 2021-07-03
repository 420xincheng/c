/*任何一个自然数n的立方均可以写成n 个连续奇数之和
for example：1^3=1
			 2^3=3+5
			 3^3=7+9+11
			 4^3=13+15+17+19
		要求：输入一个自然数n ，求组成n^3的n个连续奇数。
*/
//设第一个奇数为2m+1,则有n^3=(2m+1)+(2m+3)+(...)+(2m+2n-1)=2mn+n^2   所以m=(n^2-n)/2;

#include <stdio.h>
void main ()
{
	int n,i,m;
	printf ("请输入一个数：\n");
	scanf ("%d",&n);
	m=(n*n-n)/2;
	printf ("%d的立方=",n);
	for (i=1;i<2*n-1;i+=2)
		printf ("%d+",2*m+i);
	printf ("%d\n",2*m+i);
	
}