/*编写min(x,y,z)，求3个整数中的最小值，并利用该函数求5个整数中的最小值。
要求 在主函数中输入5个整数，并输出结果。
*/
#include <stdio.h>
int min(int x,int y,int z)
{
	int min;
	min = x;
	if (min>y)
		min = y;
	if (min>z)
		min = z;
	return min;

}

void main ()
{
	int a,b,c,d,f;
	int min1,min2,result;
	printf ("请依次输入5个整数（以空格隔开）：\n");
	scanf ("%d %d %d %d %d",&a,&b,&c,&d,&f);
	min1=min(a,b,c);
		min2=min(min1,d,f);
	result = min2;
	printf ("5个数中最小值为：%d\n",result);
}