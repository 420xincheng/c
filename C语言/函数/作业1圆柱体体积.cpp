/*��дһ����Բ��������ĺ���f()����������������Բ����ĵ���뾶�͸ߣ����ú���f()���������
�����������������2λС����
*/

#include <stdio.h>
double f(double r,double h)
{
	double v;
	v=3.14*r*r*h;
	return v;
}

void main ()
{
	double m,n;
	scanf ("%lf %lf",&m,&n);
	printf ("%.2lf\n",f(m,n));
}