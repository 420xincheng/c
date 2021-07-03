//由于学生人数未知，so循环不能由学生人数来控制，而应该改为判断某一标志值example（0），当输入学号为0时，输入结束。

#include <string.h>					//使strcmp()库函数可用
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
int stu_num=0;					//用来保存已输入的学生人数
void add ()						//添加自定义函数
{
	int i=stu_num;
	printf ("说明：依次输入学生信息，当输入的学号为0时表示输入结束\n");
	while (1)
	{
		printf ("请输入第%d个学生的信息\n",i+1);
		printf ("请输入学号：");
		scanf ("%s",&stu[i].num);

		if (strcmp(stu[i].num,"0")==0)
			break;

		printf ("请输入姓名：");
		scanf ("%s",&stu[i].name);
		printf ("请输入年龄：");
		scanf ("%d",&stu[i].age);
		printf ("请输入C语言成绩：");
		scanf ("%d",&stu[i].c);
		printf ("请输入数学成绩：");
		scanf ("%d",&stu[i].math);
		printf ("请输入英语成绩：");
		scanf ("%d",&stu[i].en);
		stu[i].sum = stu[i].c + stu[i].math + stu[i].en;
		stu[i].ave = (float)stu[i].sum/3;
		i++;
	}
	stu_num=i;
	printf ("总共已输入%d个学生的信息\n",stu_num);

}
void display_all()						//数据显示自定义函数
{
	int i;
	if (stu_num>0)
	{
		printf ("学生学号\t姓名\t年龄\tC语言\t数学\t英语\t总分\t平均分\n");
		for (i=0;i<stu_num;i++)
			printf ("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",
			stu[i].num,stu[i].name,stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);

	}
	else 
		printf ("学生信息为空！");
}
void main ()
{
	add ();					//调用数据输入自定义函数
	display_all();			//调用数据输出自定义函数

}

 