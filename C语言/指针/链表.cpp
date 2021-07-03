#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu_node{			//结构体类型
	char num[15];
	int score;
	struct stu_node * next;			//指向下一个结点的指针
};
struct stu_node * stu_create()			//建立链表函数
{
	struct stu_node * head, *newn, *tail;
	char num[15];
	int score;

	//创建第一个结点，并输入数据

	printf ("请输入学生的学号和分数（学号=0时表示结束）：\n");
	scanf ("%s%d",num,&score);
	newn = (struct stu_node *)malloc(sizeof(struct stu_node));
	strcpy (newn->num,num);
	newn->score = score;
	newn->next = NULL ;						//给next指针赋值
	head = newn;							//刚开始为空表，让头指针指向新结点

	//继续创建后续结点，并输入数据

	tail = newn;							//让尾指针指向新结点

	while(1)
	{
		printf ("请输入学生的学号和分数：\n");				
		scanf ("%s",num);
		if (strcmp(num,"0")==0)								//学号为0，退出循环
			break;
		else												//创建新结点
		{
			scanf ("%d",&score);
			newn = (struct stu_node*)malloc(sizeof(struct stu_node));
			strcpy(newn->num,num);
			newn->score = score;
			newn->next = NULL ;
			tail->next = newn;
			tail = newn;
		}
	}
	return head;							//将链表的头指针返回给主调函数
}

void stu_printf (struct stu_node * head)				//数据输出函数
{
	struct stu_node * p = head;
	if (p == NULL )
	{
		printf ("学生信息为空！\n");
		return;
	}
	printf ("学号\t分数\n");							//打印表头
	while (p!=NULL )
	{
		printf ("%s\t%d\n",p->num,p->score);				//输出当前结点的数据
		p = p->next;										//将指针变量p移到下一个结点
	}
}

void stu_modify (struct stu_node * head)				//修改学生信息函数
{
	char num[15];
	struct stu_node * p = head;							//将链表头指针赋给p
	if (head = NULL )
	{
		printf("学生信息为空！\n");
		return;
	}
	printf("请输入要修改的学生的学号：");
	scanf ("%s",num);
	while (strcmp(p->num,num)!=0 && p!=NULL )			//查找该学生
	p = p->next;										//将指针变量p移到下一个结点
	if (p!=NULL )										//如果找到该学生则修改
	{
		printf ("请输入要修改的学生分数");
		scanf ("%d",&p->score);
	}
	else
		printf ("未找到该学生信息");
}

struct stu_node * stu_delete(struct stu_node * head)			//删除学生信息
{
	char num[15];
	struct stu_node * p = head,*p1;
	if (p=NULL )
	{
		printf ("学生信息为空！\n");
		return head;
	}
	printf ("请输入要删除的学生的学号：");
	scanf("%s",num);
	while (strcmp(p->num,num)!=0 && p!=NULL )				//查找要删除的学生
	{
		p1 = p;												//保存p至p1
		p = p->next;										//将指针变量p移到下一个结点
	}
	if (p!= NULL )											//找到了该学生
	{
		if (p == head)										//if待删结点是第一个结点
			head = p->next;									//使头指针指向待删结点的下一个结点
		else
			p1->next = p->next;								//前一结点的指针指向待删结点的下一结点
		free(p);											//释放待删结点所占用的内存
	}
	else
		printf ("未找到该学号的学生！\n");
	return head;
}

void main()
{
	int choice;					//
	struct stu_node * head = NULL ;
	printf ("         欢迎使用学生信息管理系统\n");
	printf ("------------------------------------------\n");
	printf ("1.创建学生链表      2.显示学生信息\n");
	printf ("3.修改学生信息      4.删除学生信息\n");
	printf ("5.退出程序\n");
	printf ("------------------------------------------\n");
	while (1)
	{
		 printf ("请输入功能选择模块,输入数字1-5：");
		 scanf("%d",&choice);
		 switch(choice)
		 {
			 case 1:head = stu_create(); break;
			 case 2:stu_printf (head); break;
			 case 3:stu_modify (head); break;
			 case 4:head = stu_delete (head); break;
			 case 5:exit(0);
			 default:printf ("输入错误！\n");
		 }
	}
}