//��д�������������ε�3���߳������������

#include <stdio.h>
#include <math.h>
void main ()
{
	double x,y,z,p,s;
	printf ("�����������ε�3���߳���");
	scanf ("%lf %lf %lf",&x,&y,&z);
	if ((x+y)>z && (x+z>y) && (y+z)>x)
	{	
	p=(x+y+z)/2;
	s=sqrt(p*(p-x)*(p-y)*(p-z));
	printf ("�����ε����Ϊ��%lf\n",s);
	}
	else
		printf ("�������ݹ����������Σ����������룡\n");
	
}