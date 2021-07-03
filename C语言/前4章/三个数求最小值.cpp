//从键盘输入三个整数，求它们的最小值。

#include <stdio.h>
void main()
{
	int x,y,z,min;
	printf("请输入三个整数：");
	scanf("%d %d %d",&x, &y, &z);
	min = x;
	if (min>y)
		min = y;
	if (min>z)
		min = z;
	printf("最小值为：%d",min);

}