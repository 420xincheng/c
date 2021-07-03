/*运行结果：
			f1():1				静态局部变量只初始化一次，以后每次调用保留上一次调用结束时的结果
			f1():2
			f1():3
			f2():1
			f2():1
			f2():1
			当在退出自定义函数后，需要保留变量的执行结果时采用静态局部变量。
*/

#include <stdio.h>
void main ()
{
	void f1(),f2();
	int i;
	for (i=1;i<=3;i++)
		f1();
	for (i=1;i<=3;i++)
		f2();
}
void f1()
{
	static int k=0;
	k++;
	printf ("f1():%d\n",k);
}
void f2()
{
	int k=0;
	k++;
	printf ("f2():%d\n",k);
}