//�������ɸ��ɼ���ѧ������δ֪�������븺��ʱ��ʾ��������������гɼ�����߷֡�

#include <stdio.h>
void main ()
{
	int num;
	int i=1,max=0;
	do
	{
		printf ("�������%d��ѧ���ĳɼ���",i);
		scanf ("%d",&num);
		if (num>max)
			max = num;
		i++;
	}while (num>=0);
	printf ("��߷�Ϊ%d\n",max);
}
