#include <stdio.h>
struct stu_type{
	char num[15];
	char name[10];
	int age;
	int c;
	int math;
	int en;
	int sum;
	float ave;
};
struct stu_type stu[100];							//ѧ������
void main ()
{
	int i=0,stu_num;
	printf ("������ѧ��������");
	scanf ("%d",&stu_num);
	for (i=0;i<stu_num;i++)							//stu_num��ʾѧ������
	{
		printf ("�������%d��ѧ������Ϣ\n",i+1);
		printf ("������ѧ�ţ�");
		scanf ("%s",&stu[i].num);
		printf ("������������");
		scanf ("%s",&stu[i].name);
		printf ("���������䣺");
		scanf ("%s",&stu[i].age);
		printf ("������C���Գɼ���");
		scanf ("%d",&stu[i].c);
		printf ("��������ѧ�ɼ���");
		scanf ("%d",&stu[i].math);
		printf ("������Ӣ��ɼ���");
		scanf ("%d",&stu[i].en);
		stu[i].sum = stu[i].c + stu[i].math + stu[i].en;
		stu[i].ave = (float)stu[i].sum/3;

	}
	//��ʾѧ����Ϣ
	printf ("ѧ��ѧ��\t����\t����\tC����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
	for (i=0;i<stu_num;i++)
		printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",
			stu[i].num,stu[i].name,stu[i].age,stu[i].c,
			stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);
}
