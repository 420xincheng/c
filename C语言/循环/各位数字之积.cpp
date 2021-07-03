/*从键盘任意输入一个正整数，计算其各位数字之积，注意正整数的位数不定。 
例如：
输入：2583 经过—-(2*5*8*3) 输出：240*/

#include <stdio.h>
void main ()
{
	int n,val,s=1;
	scanf ("%d",&n);
	val=n;
	while(val)
	{
		s = s*(val%10);		//while里面求的是每位数，妙哉！
		val /=10; 

	}
	printf ("%d\n",s);
}