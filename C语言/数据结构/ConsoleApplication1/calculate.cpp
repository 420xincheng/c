//本函数主要功能是通过后缀表达式直接计算所需要的结果
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "calculate.h"

int calculate(char* Postfix) {
	int max = 100;
	stack* res = Create(max);
	Init(res);
	
	char* postfix = Postfix;
	while(*postfix != '\0') {
		if (*postfix >= '0' && *postfix <= '9')
		{
			int d = *postfix - '0';
			Push(res,d);
			*postfix++;
		}
		char item;
		if(*postfix == '+')
		{
			int a,b,c;
			
			b=GetTop(res);
			Pop(res,item);
			a=GetTop(res);
			Pop(res,item);
			c=a+b;
			Push(res,c);
			*postfix++;
		}
		if(*postfix == '-')
		{
			int a,b,c;
			b=GetTop(res);
			Pop(res,item);
			a=GetTop(res);
			Pop(res,item);
			c=a-b;
			Push(res,c);
			*postfix++;
		}
		if(*postfix == '*')
		{
			int a,b,c;
			b=GetTop(res);
			Pop(res,item);
			a=GetTop(res);
			Pop(res,item);
			c=a*b;
			Push(res,c);
			*postfix++;
		}
		if(*postfix == '/')
		{
			int a,b,c;
			b=GetTop(res);
			Pop(res,item);
			a=GetTop(res);
			Pop(res,item);
			c=a/b;
			Push(res,c);
			*postfix++;
		}
	}
	return GetTop(res);
}