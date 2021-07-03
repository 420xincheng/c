/*自定义函数void swap(int a,int b)，用来交换两个形参变量的值。
*/

#include <stdio.h>
void main ()
{
	int m,n;
	void swap (int a,int b);
	printf ("请输入两个整数：");
	scanf ("%d %d",&m,&n);
	swap (m,n);
	printf ("main（）中交换后：m=%d,n=%d\n",m,n);
}

void swap (int a,int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf ("swap（）中交换后：a=%d,b=%d\n",a,b);
}

/*运行结果：
					请输入两个整数：2 4
					swap（）中交换后：a=4,b=2
					main（）中交换后：m=2,n=4
		实参m,n没有变，是因为形参和实参各占独立的内存单元，形参值得变化并不影响实参值。
*/