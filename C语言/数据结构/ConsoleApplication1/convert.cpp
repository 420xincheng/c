//本函数的作用是将中缀表达式转化为逆波兰式（后缀表达式）
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "stack.h"


//先判断优先级
int priority(char x) {
	if(x == '(') {
		return 0;		//括号在栈里的优先级最低，为了保证其他符号能够正常入栈
	}
	else if (x == '+' || x == '-') {
		return 1;
	}
	else {
		return 2;
	}
	
}

//   x的优先级大于y
bool cmp(char x, char y) {
	return priority(x) > priority(y);
}

//开始转化
char* convert(char* Infix) {
	int max = 100;
	stack* op = Create(max);
	Init(op);
	int index = 0;		
	int len = strlen(Infix);  //表达式的长度
	char *Postfix = (char*)malloc(sizeof(char) * len);		
	for(int i = 0; i < len; i++) {
		//如果是数，直接输出
		if(Infix[i] >= '0' && Infix[i] <= '9') {
			Postfix[index] = Infix[i];
			index++;
		}
		else if(Infix[i] == ')') {
			//如果遇到右括号，则需要不断的弹出数据，直到遇到左括号结束
			while(!IsEmpty(op) && GetTop(op) != '(') {
				Postfix[index] = GetTop(op);
				index++;
				char item;
				Pop(op,item);
			}
			char it;
			Pop(op,it);		//将左括号弹出
		} else if(Infix[i] == '(') {
			Push(op,Infix[i]);
		}
		else {
			// 表达式中的运算符优先级 <= 栈顶元素，就弹出栈顶元素
			while( !IsEmpty(op) && !cmp(Infix[i],GetTop(op)) ) {
				//printf("%c %c %d\n",Infix[i],GetTop(op),cmp(Infix[i],GetTop(op)));
				Postfix[index] = GetTop(op);
				index++;
				char item;
				Pop(op,item);
			}
			Push(op,Infix[i]);
		}
		//printf("此时输出的内容：%-20s\t,参加的运算的符号%c\t\t",Postfix,Infix[i]);
	}
	while(!IsEmpty(op)) {
		Postfix[index] = GetTop(op);
		index++;
		char item;
		Pop(op,item);
	}
	Postfix[index] = '\0';
	return Postfix;
}
