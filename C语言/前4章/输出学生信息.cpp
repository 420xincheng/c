#include <stdio.h>
void main()
{
	char num[15];
	char name[10];
	int age;
	int c;
	int math;
	int en;
	int sum;
	float ave;
	printf("������ѧ�ţ�");
	scanf("%s",num);
	printf("������������");
	scanf("%s",name);
	printf("���������䣺");
	scanf("%d",&age);
	printf("������C���Գɼ���");
	scanf("%d",&c);
	printf("��������ѧ�ɼ�:");
	scanf("%d",&math);
	printf("������Ӣ��ɼ���");
	scanf("%d",&en);
	sum=c+math+en;
	ave=sum/3.0;
	printf("ѧ��\t����\t����\tC����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
	printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%.1f\n",num,name,age,c,math,en,sum,ave);
}