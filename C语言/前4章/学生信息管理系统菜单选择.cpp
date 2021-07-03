//编程实现学生信息管理系统中的菜单选择和系统功能。

#include <stdio.h>
#include <stdlib.h>
void main ()
{
	int choice;
	printf ("          欢迎使用学生工作管理系统!\n");
	printf ("--------------------------------------------------------------------\n");
	printf ("1.添加学生信息					2.显示学生信息\n");
	printf ("3.修改学生信息					4.删除学生信息\n");
	printf ("5.查找学生信息					6.统计不及格人数，最高分和平均分\n");
	printf ("7.按总分排序					8.保存至文件（文本方式）\n");
	printf ("9.从文件读入（文本方式）			10.保存至文件（二进制方式）\n");
	printf ("11.从文件读入（二进制方式）			12.退出程序\n");
	printf ("--------------------------------------------------------------------\n");
	printf ("请输入功能选择模块(输入数字1-12)：");
	scanf ("%d",&choice);                         
	if (choice>=1 && choice<=12)					//如果用户输入的菜单编号有效
		switch (choice)
		{
			case 1:printf ("调用添加学生信息模块\n");break;
			case 2:printf ("调用显示学生信息模块\n");break;
			case 3:printf ("调用修改学生信息模块\n");break;
			case 4:printf ("调用删除学生信息模块\n");break;
			case 5:printf ("调用查找学生信息模块\n");break;
			case 6:printf ("调用统计学生信息模块\n");break;
			case 7:printf ("调用按总分排序模块\n");break;
			case 8:printf ("调用保存至文件（文本方式）模块\n");break;
			case 9:printf ("调用从文件读入（文本方式）模块\n");break;
			case 10:printf ("调用保存至文件（二进制方式）模块\n");break;
			case 11:printf ("调用从文件读入（二进制方式）模块\n");break;
			case 12:exit(0);     //退出程序

		}
	else
		printf ("输入数字不正确，请重新输入1-12：\n");
}