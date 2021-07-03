/*
*/

#include <stdio.h>
void main ()
{
	void prt();
	int x=1;
	prt();
	printf ("%d\n",x);
}

void prt()
{
	auto x=5;
	printf ("%d\n",x);
}
//执行main时会为x分配存储空间，main执行完才会被释放，同理....程序中两个变量所分配的存储空间是不同的。