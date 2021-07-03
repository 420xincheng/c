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
struct stu_type stu[100];							//学生数组
void main ()
{
	int i=0,stu_num;
	printf ("请输入学生人数：");
	scanf ("%d",&stu_num);
	for (i=0;i<stu_num;i++)							//stu_num表示学生人数
	{
		printf ("请输入第%d个学生的信息\n",i+1);
		printf ("请输入学号：");
		scanf ("%s",&stu[i].num);
		printf ("请输入姓名：");
		scanf ("%s",&stu[i].name);
		printf ("请输入年龄：");
		scanf ("%s",&stu[i].age);
		printf ("请输入C语言成绩：");
		scanf ("%d",&stu[i].c);
		printf ("请输入数学成绩：");
		scanf ("%d",&stu[i].math);
		printf ("请输入英语成绩：");
		scanf ("%d",&stu[i].en);
		stu[i].sum = stu[i].c + stu[i].math + stu[i].en;
		stu[i].ave = (float)stu[i].sum/3;

	}
	//显示学生信息
	printf ("学生学号\t姓名\t年龄\tC语言\t数学\t英语\t总分\t平均分\n");
	for (i=0;i<stu_num;i++)
		printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",
			stu[i].num,stu[i].name,stu[i].age,stu[i].c,
			stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);
}
