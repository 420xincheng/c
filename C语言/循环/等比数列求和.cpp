//һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ�����������ף�������ߣ����������λС����

#include <stdio.h>
#include <math.h>

void main ()
{
	
	double m,n,sum=0,h;
	scanf ("%lf %lf",&m,&n);

	sum = 2*2*m*(1-pow(0.5,n)) - m;		//�ȱ�������͹�ʽ
	h = m/pow (2.0,n);

	printf ("%.2lf %.2lf",sum,h);

}