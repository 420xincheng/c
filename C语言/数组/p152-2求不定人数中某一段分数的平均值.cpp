//�Ӽ����������ɸ�ѧ���ĳɼ������븺��ʱ��ʾ������������ƽ���ɼ��͵���ƽ����ѧ���ĳɼ���

#include <stdio.h>
void main ()
{
	int i ,k=0;
	float sum=0,ave,x[100];
	for (i=0;i<100;i++)
	{
		printf ("�������%d��ѧ���ĳɼ���",i+1);
		scanf ("%f",&x[i]);
		if (x[i]<0)
			break;
		else {
			sum = sum +x[i];
			k++;
		}
	}
	ave = sum/k;
	printf ("ƽ���ɼ�Ϊ��%.2f\n",ave);
	printf ("����ƽ����ѧ���ĳɼ�Ϊ��\n");
	for (i=0;i<k;i++)						//ע����i<k,������<100��
	{
		if (x[i]<ave)
			printf ("%f\t",x[i]);
	
	}

}