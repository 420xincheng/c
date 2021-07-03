#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//第一栈--运算符栈
//创建一个栈
stack* Create(int maxlen) {
	stack* S = (stack*)malloc(sizeof(stack));
	S->data = (char*)malloc(maxlen * sizeof(char));
	S->top = -1;
	S->max = maxlen;
	return S; 
}

//释放一个栈
void Free(stack* S) {
	free(S->data);
	free(S);
}

//初始化
void Init(stack* S) {
	S->top = -1;
}

//判断栈是否为空
bool IsEmpty(stack* S) {
	if(S->top == -1) {
		return true;
	} else {
		return false;	
	}
}

//压入数据
void Push(stack* S,char x) {
	if(S->top == S->max - 1) {
		return ;
	} else {
		S->top++;
		S->data[S->top] = x;
	}
}

//弹出数据
int Pop(stack* S,char &x) {
	if(S->top == -1) {
		return FALSE;
	} else {
		x = S->data[S->top];
		S->top--;
		return TRUE;
	}
}

//读取栈顶元素
char GetTop(stack* S) {
	if(!IsEmpty(S)) {
		char x;
		x = S->data[S->top];
		return x;
	} else {
		return '\0';
	}
}

//第二栈--运算数栈
//创建栈
stacknum* CreateNum(int maxlen) {
	stacknum* L = (stacknum*)malloc(sizeof(stacknum));
	L->data = (double*)malloc(maxlen * sizeof(double));
	L->top = -1;
	L->max = maxlen;
	return L; 
}

//释放栈
void FreeNum(stacknum* L) {
	free(L->data);
	free(L);
}

//初始化
void InitNum(stacknum* L) {
	L->top = -1;
}

//判断栈是否为空
bool IsEmptyNum(stacknum* L) {
	if(L->top == -1) {
		return true;
	} else {
		return false;	
	}
}

//压入数据
void PushNum(stacknum* L,double num) {
	if(L->top == L->max - 1) {
		return ;
	} else {
		L->top++;
		L->data[L->top] = num;
	}
}

//弹出数据
double PopNum(stacknum* L,double &num) {
	if(L->top == -1) {
		return FALSE;
	} else {
		num = L->data[L->top];
		L->top--;
		return TRUE;
	}
}

//读取栈顶元素放入num中
bool GetTopNum(stacknum* L,double &num) {
	if(!IsEmptyNum(L)) {
		num = L->data[L->top];
		return true;
	} else {
		return false;
	}
}