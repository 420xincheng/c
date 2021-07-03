#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//��һջ--�����ջ
//����һ��ջ
stack* Create(int maxlen) {
	stack* S = (stack*)malloc(sizeof(stack));
	S->data = (char*)malloc(maxlen * sizeof(char));
	S->top = -1;
	S->max = maxlen;
	return S; 
}

//�ͷ�һ��ջ
void Free(stack* S) {
	free(S->data);
	free(S);
}

//��ʼ��
void Init(stack* S) {
	S->top = -1;
}

//�ж�ջ�Ƿ�Ϊ��
bool IsEmpty(stack* S) {
	if(S->top == -1) {
		return true;
	} else {
		return false;	
	}
}

//ѹ������
void Push(stack* S,char x) {
	if(S->top == S->max - 1) {
		return ;
	} else {
		S->top++;
		S->data[S->top] = x;
	}
}

//��������
int Pop(stack* S,char &x) {
	if(S->top == -1) {
		return FALSE;
	} else {
		x = S->data[S->top];
		S->top--;
		return TRUE;
	}
}

//��ȡջ��Ԫ��
char GetTop(stack* S) {
	if(!IsEmpty(S)) {
		char x;
		x = S->data[S->top];
		return x;
	} else {
		return '\0';
	}
}

//�ڶ�ջ--������ջ
//����ջ
stacknum* CreateNum(int maxlen) {
	stacknum* L = (stacknum*)malloc(sizeof(stacknum));
	L->data = (double*)malloc(maxlen * sizeof(double));
	L->top = -1;
	L->max = maxlen;
	return L; 
}

//�ͷ�ջ
void FreeNum(stacknum* L) {
	free(L->data);
	free(L);
}

//��ʼ��
void InitNum(stacknum* L) {
	L->top = -1;
}

//�ж�ջ�Ƿ�Ϊ��
bool IsEmptyNum(stacknum* L) {
	if(L->top == -1) {
		return true;
	} else {
		return false;	
	}
}

//ѹ������
void PushNum(stacknum* L,double num) {
	if(L->top == L->max - 1) {
		return ;
	} else {
		L->top++;
		L->data[L->top] = num;
	}
}

//��������
double PopNum(stacknum* L,double &num) {
	if(L->top == -1) {
		return FALSE;
	} else {
		num = L->data[L->top];
		L->top--;
		return TRUE;
	}
}

//��ȡջ��Ԫ�ط���num��
bool GetTopNum(stacknum* L,double &num) {
	if(!IsEmptyNum(L)) {
		num = L->data[L->top];
		return true;
	} else {
		return false;
	}
}