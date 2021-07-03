

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
	printf ("请输入学生人数：");
	scanf ("%d",&n);
	p = (struct stu_type *)malloc(sizeof(struct stu_type)*n);		//
	p1 = p;
	for (i=0; i<n; i++)
	{
		printf ("请输入第%d个学生的信息：\n",i+1);
		printf ("请输入学号：");
		scanf ("%s",p1->num);
		printf ("请输入姓名：");
		scanf ("%s",p1->name);
		printf ("请输入年龄：");
		scanf ("%d",&p1->age);
		printf ("请输入C语言成绩：");
		scanf ("%d",&p1->c);
		printf ("请输入数学成绩：");
		scanf ("%d",&p->math);
		printf ("请输入英语成绩：");
		scanf ("%d",&p1->en);
		p1->sum = p1->c + p1->en + p1->math ;
		p1->ave = (float)p1->sum/3;
		p1++;
	}
	printf ("学生学号\t姓名\t年龄\tC语言\t数学\t英语\t总分\t平均分\n");
	for (i=0; i<n; i++)
	{
		printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",p->num,
					p->name,p->age,p->c,p->math,p->en,p->sum,p->ave);
		p++;
	}
}

