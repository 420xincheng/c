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
	printf("请输入学号：");
	scanf("%s",num);
	printf("请输入姓名：");
	scanf("%s",name);
	printf("请输入年龄：");
	scanf("%d",&age);
	printf("请输入C语言成绩：");
	scanf("%d",&c);
	printf("请输入数学成绩:");
	scanf("%d",&math);
	printf("请输入英语成绩：");
	scanf("%d",&en);
	sum=c+math+en;
	ave=sum/3.0;
	printf("学号\t姓名\t年龄\tC语言\t数学\t英语\t总分\t平均分\n");
	printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%.1f\n",num,name,age,c,math,en,sum,ave);
}