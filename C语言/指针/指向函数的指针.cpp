/*�����������н�С����
*/
/*
#include <stdio.h>
void main ()
{
	int min (int a,int b);			//�Զ�������
	int ( * p)(int ,int );			//����һ��ָ������ָ�����p
	int x,y,z;
	printf ("����������������");
	scanf("%d%d",&x,&y);
	p = min;						//������������p,ʹ��ָ��min��������
	z = (* p)(x,y);					//��ָ������ָ����������ú���
	printf ("��С����Ϊ��%d\n",z);
}
int min(int x,int y)
{
	if (x<y)
		return x;
	else
		return y;
}
*/

/*���30��- 60��֮��ÿ��5������Һ��������Һ�����ֵ��1->���Һ�����2->���Һ���
*/
//point  1 ����ָ��
/*
#include <stdio.h>
#include <math.h>
int main ()
{
	void fsin();				//����
	void fcos();				//����
	int choice;
	printf ("��ѡ�����Ǻ��������ͣ�1.���Һ��� 2.���Һ�������");
	scanf ("%d",&choice);
	if (choice == 1)
	{
		printf ("���Һ�����ֵ���£�\n");
		fsin();
	}
	else if (choice == 2)
	{
		printf ("���Һ�����ֵ���£�\n");
		fcos();
	}
	else
		printf ("ѡ��������������룡\n");

	return 0;
}
void fsin()
{
	int i;
	double x;
	for (i=30; i<=60; i+=5)
	{
		x = i*3.14/180;				//��ת��Ϊ����
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
	printf ("��ѡ�����Ǻ��������ͣ�1.���Һ��� 2.���Һ�������");
	scanf ("%d",&choice);
	if (choice == 1)
	{
		printf ("���Һ�����ֵ���£�\n");
		f(sin);									//pָ����sin��������*p��(x) == sin(x)
	}
	else if (choice == 2)
	{
		printf ("���Һ�����ֵ���£�\n");
		f(cos);
	}
	else
		printf ("ѡ��������������룡\n");

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