#include <stdio.h>
#include <malloc.h>

void f (int ** q)
{
	*q = (int *)malloc(sizeof(int));		//
				//*q == p,此语句等价于 p = (int *)malloc(sizeof(int))
	//q =5;	
	//*q = 5;	//等价于 p = 5,p为指针变量，error
	**q = 5;	//*p=5
}
int main ()
{
	int *p;

	f(&p);
	printf ("%d\n",*p);
	return 0;
} 