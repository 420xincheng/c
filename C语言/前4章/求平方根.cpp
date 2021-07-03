//从键盘输入一个实数，当该数大于等于0时，输出它的平方根，否则，显示输入数据不正确。
#include <stdio.h>
#include <math.h>
void main ()
{
	double x,y;
	printf("请输入一个实数：");
	scanf("%lf",&x);
	
	if (x>=0)
	{	
		y=sqrt(x);
		printf("%lf\n",y);
	}
	else
		printf("输入数据不正确！\n");

}