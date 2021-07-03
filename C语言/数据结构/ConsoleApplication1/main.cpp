#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAXLEN 100
#include "stack.h"
#include "calculate.h"

//函数声明
int menu_choose(void);
int EasyModel(char* infix);
double StrongModel(char* infix); //强大模式
void Judging1();
void Judging2();
char infix[MAXLEN];

int priority(char x);		//返回优先级
bool cmp(char x, char y);	//  优先级x > y 返回true 
bool JudgeForm(char str[]);
int calculate(char* Postfix);	//处理后缀表达式
char* convert(char* Infix) ;	//中缀转后缀
double operate (double num1,double num2,char op); //加减乘除的操作
double calvalue (char *Infix);			//多位数的运算
stack* Create(int maxlen);		//创建一个栈
void Free(stack* S);			//释放一个栈
void Init(stack* S);			//栈的初始化
bool IsEmpty(stack* S);			//判断栈是否为空
void Push(stack* S,char x);		//压入数据
int Pop(stack*S, char &x);		//弹出数据
char GetTop(stack* S);			//读取栈顶元素
stacknum* CreateNum(int maxlen);			//创建一个栈
void FreeNum(stacknum* L);					//释放一个栈
void InitNum(stacknum* L);					//栈的初始化
bool IsEmptyNum(stacknum* L);				//判断栈是否为空
void PushNum(stacknum* L,double num);		//压入数据
double PopNum(stacknum*L, double &num);		//弹出数据
bool GetTopNum(stacknum* L,double &num);	//读取栈顶元素

//菜单选择
int menu_choose(void)
{
	int choice;
	printf("*****************************************************************\n");
	printf("\n");
	printf("\n");
	printf("*\t\t这是一个强大的计算器,欢迎使用~\t\t        *\n");
	printf("\n");
	printf("\n");
    printf("*****************************************************************\n");
	printf("\n");
	printf("-----------------------------------------------------------------\n\n");
	printf("******************本计算器暂时只提供以下功能：******************\n");
	printf("1.简易模式				2.强大模式\n\n");
	printf("3.退出程序				4.后续你会看到更强大的计算功能哦~\n\n");
	printf("-----------------------------------------------------------------\n\n");
	printf("请选择计算模式,输入数字1-3:");
	while(1){
		scanf("%d",&choice);
		if(1 <= choice && choice <= 3){
			return choice;
		}else{
			printf("其他功能还未开发，请输入已有的功能键(数字1-3)：");
		}	
	}
	return 0;
}

//简易模式
int EasyModel(char* infix)
{
	int result;
	char* suffix = {0};
	suffix = convert(infix);
	result = calculate(suffix);
	return result;
}

//强大模式
double StrongModel(char* infix) {
	double result;
	result = calvalue(infix);
	return result;
}

//是否输入正确
void Judging1() {
	double cal;
	printf("请输入您想计算的式吧：");
	scanf("%s",infix);
	printf("\n");
	if(JudgeForm(infix)) {
			printf("计算的结果为:%d\n",EasyModel(infix));
	
	} else {
		printf("输入不正确,请再次输入：");
		scanf("%s",infix);
		while(!JudgeForm(infix)) {
			printf("输入不正确,请再次输入：");
			scanf("%s",infix);
		}
			printf("计算的结果为:%d\n",EasyModel(infix));
	}

}
void Judging2() {
	clock_t starttime,endtime,time;
	double cal;
	printf("请输入您想计算的式吧：");
	scanf("%s",infix);
	
	printf("\n");
	if(JudgeForm(infix)) {
			printf("计算的结果为:%lf\n",StrongModel(infix));
	} else {
		printf("输入不正确,请再次输入：");
		scanf("%s",infix);
		while(!JudgeForm(infix)) {
			printf("输入不正确,请再次输入：");
			scanf("%s",infix);
		}
			printf("计算的结果为:%lf\n",StrongModel(infix));
	}
}
//主函数
void Continue () 
{
	char infix[MAXLEN];
	clock_t starttime,endtime,time;
	char a;
	while(1)
	{
		int choice = menu_choose();
		if(choice == 1) {
			Judging1();
			printf("\n请问是否想继续体验计算的快感(Y/N)：\n");
			fflush(stdin);
			scanf("%c",&a);
			if(a == 'Y' || a == 'y') {
				Continue();
			}
			else if(a == 'N' || a == 'n') {
				exit(0);
			}
		}
		else if(choice == 2) {
			Judging2();
			printf("\n请问是否想继续体验计算的快感(Y/N)：\n");
			fflush(stdin);
			scanf("%c",&a);
			if(a == 'Y' || a == 'y') {
				Continue();
			}
			else if(a == 'N' || a == 'n') {
				exit(0);
			}
		}
		else if(choice == 3) {
			exit(0);
		}
	}
}

int main()
{
	Continue();
	return 0;
}