//�Ӽ�������һ��ʵ�������������ڵ���0ʱ���������ƽ������������ʾ�������ݲ���ȷ��
#include <stdio.h>
#include <math.h>
void main ()
{
	double x,y;
	printf("������һ��ʵ����");
	scanf("%lf",&x);
	
	if (x>=0)
	{	
		y=sqrt(x);
		printf("%lf\n",y);
	}
	else
		printf("�������ݲ���ȷ��\n");

}