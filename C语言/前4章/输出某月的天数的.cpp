//��֪1998���1��3��5��7��8��10��12����31�죬4��6��9��11����30�죬2����28�졣����1998���ĳ���·ݡ���������ж����졣

#include <stdio.h>
void main ()
{
	int  month,day;
	printf ("�������·�(1-12)��");
	scanf ("%d",&month);
	switch (month)
	{
		case 4:
		case 6:
		case 9:
		case 11:day=30;break;
		case 2:day=28;break;
		default: day = 31;break;
	}
	printf ("%d�µ�����Ϊ%d\n",month,day);
}