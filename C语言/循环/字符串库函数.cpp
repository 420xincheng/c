//����ѧ������δ֪��soѭ��������ѧ�����������ƣ���Ӧ�ø�Ϊ�ж�ĳһ��־ֵexample��0����������ѧ��Ϊ0ʱ�����������

#include <string.h>					//ʹstrcmp()�⺯������
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
struct stu_type stu[100];
int stu_num=0;					//���������������ѧ������
void add ()						//����Զ��庯��
{
	int i=stu_num;
	printf ("˵������������ѧ����Ϣ���������ѧ��Ϊ0ʱ��ʾ�������\n");
	while (1)
	{
		printf ("�������%d��ѧ������Ϣ\n",i+1);
		printf ("������ѧ�ţ�");
		scanf ("%s",&stu[i].num);

		if (strcmp(stu[i].num,"0")==0)
			break;

		printf ("������������");
		scanf ("%s",&stu[i].name);
		printf ("���������䣺");
		scanf ("%d",&stu[i].age);
		printf ("������C���Գɼ���");
		scanf ("%d",&stu[i].c);
		printf ("��������ѧ�ɼ���");
		scanf ("%d",&stu[i].math);
		printf ("������Ӣ��ɼ���");
		scanf ("%d",&stu[i].en);
		stu[i].sum = stu[i].c + stu[i].math + stu[i].en;
		stu[i].ave = (float)stu[i].sum/3;
		i++;
	}
	stu_num=i;
	printf ("�ܹ�������%d��ѧ������Ϣ\n",stu_num);

}
void display_all()						//������ʾ�Զ��庯��
{
	int i;
	if (stu_num>0)
	{
		printf ("ѧ��ѧ��\t����\t����\tC����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
		for (i=0;i<stu_num;i++)
			printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",
			stu[i].num,stu[i].name,stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);

	}
	else 
		printf ("ѧ����ϢΪ�գ�");
}
void main ()
{
	add ();					//�������������Զ��庯��
	display_all();			//������������Զ��庯��

}

 