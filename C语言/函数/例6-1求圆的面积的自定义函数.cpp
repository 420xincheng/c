#include <stdio.h>
int main()
{
	double x,y;
	double area(double r);		//��������
	printf("������Բ�İ뾶��");
	scanf ("%lf",&x);
	y=area(x);
	printf("Բ���=%.2lf\n",y);
	return 0;
}
double area(double r)
{
	double s;
	s=3.14*r*r;
	return s;				//�������������ؼ�����
}