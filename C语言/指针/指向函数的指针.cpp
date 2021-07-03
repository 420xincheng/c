/*求两个整数中较小的数
*/
/*
#include <stdio.h>
void main ()
{
	int min (int a,int b);			//自定义声明
	int ( * p)(int ,int );			//定义一个指向函数的指针变量p
	int x,y,z;
	printf ("请输入两个整数：");
	scanf("%d%d",&x,&y);
	p = min;						//将函数名赋给p,使其指向min（）函数
	z = (* p)(x,y);					//用指向函数的指针变量来调用函数
	printf ("较小的数为：%d\n",z);
}
int min(int x,int y)
{
	if (x<y)
		return x;
	else
		return y;
}
*/

/*输出30°- 60°之间每隔5°的正弦函数或余弦函数的值，1->正弦函数，2->余弦函数
*/
//point  1 不用指针
/*
#include <stdio.h>
#include <math.h>
int main ()
{
	void fsin();				//声明
	void fcos();				//声明
	int choice;
	printf ("请选择三角函数的类型（1.正弦函数 2.余弦函数）：");
	scanf ("%d",&choice);
	if (choice == 1)
	{
		printf ("正弦函数的值如下：\n");
		fsin();
	}
	else if (choice == 2)
	{
		printf ("余弦函数的值如下：\n");
		fcos();
	}
	else
		printf ("选择错误，请重新输入！\n");

	return 0;
}
void fsin()
{
	int i;
	double x;
	for (i=30; i<=60; i+=5)
	{
		x = i*3.14/180;				//度转化为弧度
		printf ("%.2f ",sin(x));
	}
	printf ("\n");
}
void fcos()
{
	int i;
	double x;
	for (i=30; i<=60; i+=5)
	{
		x = i * 3.14 / 180;
		printf ("%.2f ",cos(x));
	}
	printf ("\n");
}
*/
//point 2
#include <stdio.h>
#include <math.h>
int main ()
{
	void f(double (* p)(double));   //
	int choice;
	printf ("请选择三角函数的类型（1.正弦函数 2.余弦函数）：");
	scanf ("%d",&choice);
	if (choice == 1)
	{
		printf ("正弦函数的值如下：\n");
		f(sin);									//p指向了sin函数，（*p）(x) == sin(x)
	}
	else if (choice == 2)
	{
		printf ("余弦函数的值如下：\n");
		f(cos);
	}
	else
		printf ("选择错误，请重新输入！\n");

	return 0;
}
void f(double (* p)(double))
{
	int i;
	double x;
	for (i=30; i<=60; i+=5)
	{
		x = i*3.14/180;
		printf ("%.2f  ",( * p)(x));
	}

	printf ("\n");
}