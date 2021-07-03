//编写程序，输入三角形的3条边长，求其面积。

#include <stdio.h>
#include <math.h>
void main ()
{
	double x,y,z,p,s;
	printf ("请输入三角形的3条边长：");
	scanf ("%lf %lf %lf",&x,&y,&z);
	if ((x+y)>z && (x+z>y) && (y+z)>x)
	{	
	p=(x+y+z)/2;
	s=sqrt(p*(p-x)*(p-y)*(p-z));
	printf ("三角形的面积为：%lf\n",s);
	}
	else
		printf ("输入数据构不成三角形！请重新输入！\n");
	
}