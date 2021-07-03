#include <stdio.h>
int main()
{
	double x,y;
	double area(double r);		//函数声明
	printf("请输入圆的半径：");
	scanf ("%lf",&x);
	y=area(x);
	printf("圆面积=%.2lf\n",y);
	return 0;
}
double area(double r)
{
	double s;
	s=3.14*r*r;
	return s;				//向主调函数返回计算结果
}