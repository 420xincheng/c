#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include "calculate.h"

//计算加减乘除
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

	char tempstr[20] = {0};		//临时存放子串
	double num1,num2;		//运算值栈弹出来的操作数
	char op;				//运算符栈弹出来的操作符

	int len = strlen(Infix);
	for(i = 0; i < len; i++) {
		if(Infix[i] >= '0' && Infix[i] <= '9' || Infix[i] == '.') {    //数值或者小数点，可拼接子串
			double mulnum = 0;
			j = 0;
			while(Infix[i] >= '0' && Infix[i] <= '9' || Infix[i] == '.' ) {	//拼接多位数
				tempstr[j] = Infix[i];
				j++;
				i++;
			}
			i--;
			tempstr[j] = '\0';
			mulnum = atof(tempstr);		//调用库函数将字符串转成double的数
			PushNum(op_num,mulnum);		//放入运算值栈
		} 
		else if (Infix[i] == '+' || Infix[i] == '-' || Infix[i] == '*' || Infix[i] == '/' || Infix[i] == '(' || Infix[i] == ')') {
			if(Infix[i] == '(') {   //左括号直接入栈
				Push(symbol,Infix[i]);
			} 
			else if (Infix[i] == ')'){   //遇到右括号，不断弹出，直到遇到左括号为止
				while(!IsEmpty(symbol) && GetTop(symbol) != '(') {
					//从值栈中取两个进行计算
					//double item;
					PopNum(op_num,num1);
				
					PopNum(op_num,num2);
					
					Pop(symbol,op);
					double number = operate(num2,num1,op);		//注意计算顺序，先弹出来的为第二个操作数
					PushNum(op_num,number);
				}
				Pop(symbol,op);
			} 
			else if (IsEmpty(symbol)){
				Push(symbol,Infix[i]);
			} 
			else if (cmp(Infix[i],GetTop(symbol))) {    //扫描的操作符优先级比栈顶元素高，直接入栈
				Push(symbol,Infix[i]);
			} 
			else {
				// 表达式中的运算符优先级 <= 栈顶元素，就弹出栈顶元素
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