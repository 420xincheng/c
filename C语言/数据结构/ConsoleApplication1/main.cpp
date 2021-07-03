#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAXLEN 100
#include "stack.h"
#include "calculate.h"

//��������
int menu_choose(void);
int EasyModel(char* infix);
double StrongModel(char* infix); //ǿ��ģʽ
void Judging1();
void Judging2();
char infix[MAXLEN];

int priority(char x);		//�������ȼ�
bool cmp(char x, char y);	//  ���ȼ�x > y ����true 
bool JudgeForm(char str[]);
int calculate(char* Postfix);	//�����׺���ʽ
char* convert(char* Infix) ;	//��׺ת��׺
double operate (double num1,double num2,char op); //�Ӽ��˳��Ĳ���
double calvalue (char *Infix);			//��λ��������
stack* Create(int maxlen);		//����һ��ջ
void Free(stack* S);			//�ͷ�һ��ջ
void Init(stack* S);			//ջ�ĳ�ʼ��
bool IsEmpty(stack* S);			//�ж�ջ�Ƿ�Ϊ��
void Push(stack* S,char x);		//ѹ������
int Pop(stack*S, char &x);		//��������
char GetTop(stack* S);			//��ȡջ��Ԫ��
stacknum* CreateNum(int maxlen);			//����һ��ջ
void FreeNum(stacknum* L);					//�ͷ�һ��ջ
void InitNum(stacknum* L);					//ջ�ĳ�ʼ��
bool IsEmptyNum(stacknum* L);				//�ж�ջ�Ƿ�Ϊ��
void PushNum(stacknum* L,double num);		//ѹ������
double PopNum(stacknum*L, double &num);		//��������
bool GetTopNum(stacknum* L,double &num);	//��ȡջ��Ԫ��

//�˵�ѡ��
int menu_choose(void)
{
	int choice;
	printf("*****************************************************************\n");
	printf("\n");
	printf("\n");
	printf("*\t\t����һ��ǿ��ļ�����,��ӭʹ��~\t\t        *\n");
	printf("\n");
	printf("\n");
    printf("*****************************************************************\n");
	printf("\n");
	printf("-----------------------------------------------------------------\n\n");
	printf("******************����������ʱֻ�ṩ���¹��ܣ�******************\n");
	printf("1.����ģʽ				2.ǿ��ģʽ\n\n");
	printf("3.�˳�����				4.������ῴ����ǿ��ļ��㹦��Ŷ~\n\n");
	printf("-----------------------------------------------------------------\n\n");
	printf("��ѡ�����ģʽ,��������1-3:");
	while(1){
		scanf("%d",&choice);
		if(1 <= choice && choice <= 3){
			return choice;
		}else{
			printf("�������ܻ�δ���������������еĹ��ܼ�(����1-3)��");
		}	
	}
	return 0;
}

//����ģʽ
int EasyModel(char* infix)
{
	int result;
	char* suffix = {0};
	suffix = convert(infix);
	result = calculate(suffix);
	return result;
}

//ǿ��ģʽ
double StrongModel(char* infix) {
	double result;
	result = calvalue(infix);
	return result;
}

//�Ƿ�������ȷ
void Judging1() {
	double cal;
	printf("��������������ʽ�ɣ�");
	scanf("%s",infix);
	printf("\n");
	if(JudgeForm(infix)) {
			printf("����Ľ��Ϊ:%d\n",EasyModel(infix));
	
	} else {
		printf("���벻��ȷ,���ٴ����룺");
		scanf("%s",infix);
		while(!JudgeForm(infix)) {
			printf("���벻��ȷ,���ٴ����룺");
			scanf("%s",infix);
		}
			printf("����Ľ��Ϊ:%d\n",EasyModel(infix));
	}

}
void Judging2() {
	clock_t starttime,endtime,time;
	double cal;
	printf("��������������ʽ�ɣ�");
	scanf("%s",infix);
	
	printf("\n");
	if(JudgeForm(infix)) {
			printf("����Ľ��Ϊ:%lf\n",StrongModel(infix));
	} else {
		printf("���벻��ȷ,���ٴ����룺");
		scanf("%s",infix);
		while(!JudgeForm(infix)) {
			printf("���벻��ȷ,���ٴ����룺");
			scanf("%s",infix);
		}
			printf("����Ľ��Ϊ:%lf\n",StrongModel(infix));
	}
}
//������
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
			printf("\n�����Ƿ�������������Ŀ��(Y/N)��\n");
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
			printf("\n�����Ƿ�������������Ŀ��(Y/N)��\n");
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