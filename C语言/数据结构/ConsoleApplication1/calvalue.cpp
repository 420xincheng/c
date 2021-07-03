#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include "calculate.h"

//����Ӽ��˳�
//begin
double operate (double num1,double num2,char op) {
	switch(op) {
		case'+':
			return num1 + num2;
		case'-':
			return num1 - num2;
		case'*':
			return num1 * num2;
		case'/':
			return num1 / num2;
	}
	return 0;
}
//end

double calvalue (char *Infix) {

	int max = 100;
	int i,j;
	stack* symbol = Create(max);
	stacknum* op_num = CreateNum(max);
	Init(symbol);
	InitNum(op_num);

	char tempstr[20] = {0};		//��ʱ����Ӵ�
	double num1,num2;		//����ֵջ�������Ĳ�����
	char op;				//�����ջ�������Ĳ�����

	int len = strlen(Infix);
	for(i = 0; i < len; i++) {
		if(Infix[i] >= '0' && Infix[i] <= '9' || Infix[i] == '.') {    //��ֵ����С���㣬��ƴ���Ӵ�
			double mulnum = 0;
			j = 0;
			while(Infix[i] >= '0' && Infix[i] <= '9' || Infix[i] == '.' ) {	//ƴ�Ӷ�λ��
				tempstr[j] = Infix[i];
				j++;
				i++;
			}
			i--;
			tempstr[j] = '\0';
			mulnum = atof(tempstr);		//���ÿ⺯�����ַ���ת��double����
			PushNum(op_num,mulnum);		//��������ֵջ
		} 
		else if (Infix[i] == '+' || Infix[i] == '-' || Infix[i] == '*' || Infix[i] == '/' || Infix[i] == '(' || Infix[i] == ')') {
			if(Infix[i] == '(') {   //������ֱ����ջ
				Push(symbol,Infix[i]);
			} 
			else if (Infix[i] == ')'){   //���������ţ����ϵ�����ֱ������������Ϊֹ
				while(!IsEmpty(symbol) && GetTop(symbol) != '(') {
					//��ֵջ��ȡ�������м���
					//double item;
					PopNum(op_num,num1);
				
					PopNum(op_num,num2);
					
					Pop(symbol,op);
					double number = operate(num2,num1,op);		//ע�����˳���ȵ�������Ϊ�ڶ���������
					PushNum(op_num,number);
				}
				Pop(symbol,op);
			} 
			else if (IsEmpty(symbol)){
				Push(symbol,Infix[i]);
			} 
			else if (cmp(Infix[i],GetTop(symbol))) {    //ɨ��Ĳ��������ȼ���ջ��Ԫ�ظߣ�ֱ����ջ
				Push(symbol,Infix[i]);
			} 
			else {
				// ���ʽ�е���������ȼ� <= ջ��Ԫ�أ��͵���ջ��Ԫ��
				while( !IsEmpty(symbol) && !cmp(Infix[i],GetTop(symbol)) ) {
					PopNum(op_num,num1);
					PopNum(op_num,num2);
					Pop(symbol,op);
					double number = operate(num2,num1,op);
					PushNum(op_num,number);
				}
				Push(symbol,Infix[i]);
			}
		}
	}
	while(!IsEmpty(symbol)) {
		PopNum(op_num,num1);
		PopNum(op_num,num2);
		Pop(symbol,op);
		double number = operate(num2,num1,op);
		PushNum(op_num,number);
	}
	double result;
	PopNum(op_num,result);
	return result;
}