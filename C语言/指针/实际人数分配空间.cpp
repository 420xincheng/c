

#include <stdio.h>
#include <stdlib.h>

void main ()
{
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
	struct stu_type *p, *p1;
	int n,i;
	printf ("������ѧ��������");
	scanf ("%d",&n);
	p = (struct stu_type *)malloc(sizeof(struct stu_type)*n);		//
	p1 = p;
	for (i=0; i<n; i++)
	{
		printf ("�������%d��ѧ������Ϣ��\n",i+1);
		printf ("������ѧ�ţ�");
		scanf ("%s",p1->num);
		printf ("������������");
		scanf ("%s",p1->name);
		printf ("���������䣺");
		scanf ("%d",&p1->age);
		printf ("������C���Գɼ���");
		scanf ("%d",&p1->c);
		printf ("��������ѧ�ɼ���");
		scanf ("%d",&p->math);
		printf ("������Ӣ��ɼ���");
		scanf ("%d",&p1->en);
		p1->sum = p1->c + p1->en + p1->math ;
		p1->ave = (float)p1->sum/3;
		p1++;
	}
	printf ("ѧ��ѧ��\t����\t����\tC����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
	for (i=0; i<n; i++)
	{
		printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",p->num,
					p->name,p->age,p->c,p->math,p->en,p->sum,p->ave);
		p++;
	}
}

