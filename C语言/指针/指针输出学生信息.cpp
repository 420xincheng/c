
#include <stdio.h>
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
	struct stu_type *p, stu[3] ={	{"2011110101","��С��",22,60,70,75},
									{"2011110102","��С��",22,65,75,75},
									{"2011110103","��С��",21,68,78,75}};

	printf ("ѧ��ѧ��\t����\t����\tC����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");

	for (p = stu; p < stu+3; p++)
	{
		p->sum = p->c + p->math + p->en;
		p->ave = (float)p->sum/3;

		printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",p->num,p->name,p->age,p->c,
				p->math,p->en,p->sum,p->ave);
	}
}