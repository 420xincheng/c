#include <stdio.h>
void main()
{
	int c[5],sum;
	double ave;
	printf("�������1��ѧ���ķ�����");
	scanf("%d",&c[0]);
	printf("�������2��ѧ���ķ�����");
	scanf("%d",&c[1]);
	printf("�������3��ѧ���ķ�����");
	scanf("%d",&c[2]);
	printf("�������4��ѧ���ķ�����");
	scanf("%d",&c[3]);
	printf("�������5��ѧ���ķ�����");
	scanf("%d",&c[4]);
	sum=c[0]+c[1]+c[2]+c[3]+c[4];
	ave=sum/5.0;
    printf("ƽ����Ϊ��%.2lf\n",ave);
}