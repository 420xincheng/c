/*�Զ��庯��void swap(int a,int b)���������������βα�����ֵ��
*/

#include <stdio.h>
void main ()
{
	int m,n;
	void swap (int a,int b);
	printf ("����������������");
	scanf ("%d %d",&m,&n);
	swap (m,n);
	printf ("main�����н�����m=%d,n=%d\n",m,n);
}

void swap (int a,int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf ("swap�����н�����a=%d,b=%d\n",a,b);
}

/*���н����
					����������������2 4
					swap�����н�����a=4,b=2
					main�����н�����m=2,n=4
		ʵ��m,nû�б䣬����Ϊ�βκ�ʵ�θ�ռ�������ڴ浥Ԫ���β�ֵ�ñ仯����Ӱ��ʵ��ֵ��
*/