
# include <stdio.h>
void f (int ** q)			//q�Ǹ�ָ�����������q��ʲô���͵�ָ���������ֻռ4���ֽ�
{
	int i = 5;
	//*q == p,   q  and  **q  �����ȼ��� p
	//*q = i;    //error *q = i   �ȼ��� p = i, but pΪָ�����
	*q = &i;
}
int main(void )
{
	int *p;

	f(&p);
	printf("%d\n",*p);		//�����﷨û�����⣬���߼��������⣬f()�Ѿ�������i�Ŀռ��Ѿ��ͷ�
}

/*
#include <stdio.h>

int main ()
{
	int i=10;
	int * p = &i;
	int ** q = &p;
	int *** r = & q;

	//r = &p;	//error,because rΪint *** ���ͣ�rֻ���int ** ���ͱ����ĵ�ַ
	printf ("i = %d\n",***r);
	return 0;
}
*/
/* 
void f(int ** q)
{
	//*q����p
}

void g()
{
	int i = 10;
	int * p = &i;

	f(&p);			//p��int *���ͣ�&p��int ** ����
}

*/