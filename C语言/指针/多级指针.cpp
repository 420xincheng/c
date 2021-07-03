
# include <stdio.h>
void f (int ** q)			//q是个指针变量，无论q是什么类型的指针变量，都只占4个字节
{
	int i = 5;
	//*q == p,   q  and  **q  均不等价于 p
	//*q = i;    //error *q = i   等价于 p = i, but p为指针变量
	*q = &i;
}
int main(void )
{
	int *p;

	f(&p);
	printf("%d\n",*p);		//本句语法没有问题，但逻辑上有问题，f()已经结束，i的空间已经释放
}

/*
#include <stdio.h>

int main ()
{
	int i=10;
	int * p = &i;
	int ** q = &p;
	int *** r = & q;

	//r = &p;	//error,because r为int *** 类型，r只存放int ** 类型变量的地址
	printf ("i = %d\n",***r);
	return 0;
}
*/
/* 
void f(int ** q)
{
	//*q就是p
}

void g()
{
	int i = 10;
	int * p = &i;

	f(&p);			//p是int *类型，&p是int ** 类型
}

*/