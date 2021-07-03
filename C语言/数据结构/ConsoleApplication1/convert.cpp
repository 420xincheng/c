//�������������ǽ���׺���ʽת��Ϊ�沨��ʽ����׺���ʽ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "stack.h"


//���ж����ȼ�
int priority(char x) {
	if(x == '(') {
		return 0;		//������ջ������ȼ���ͣ�Ϊ�˱�֤���������ܹ�������ջ
	}
	else if (x == '+' || x == '-') {
		return 1;
	}
	else {
		return 2;
	}
	
}

//   x�����ȼ�����y
bool cmp(char x, char y) {
	return priority(x) > priority(y);
}

//��ʼת��
char* convert(char* Infix) {
	int max = 100;
	stack* op = Create(max);
	Init(op);
	int index = 0;		
	int len = strlen(Infix);  //���ʽ�ĳ���
	char *Postfix = (char*)malloc(sizeof(char) * len);		
	for(int i = 0; i < len; i++) {
		//���������ֱ�����
		if(Infix[i] >= '0' && Infix[i] <= '9') {
			Postfix[index] = Infix[i];
			index++;
		}
		else if(Infix[i] == ')') {
			//������������ţ�����Ҫ���ϵĵ������ݣ�ֱ�����������Ž���
			while(!IsEmpty(op) && GetTop(op) != '(') {
				Postfix[index] = GetTop(op);
				index++;
				char item;
				Pop(op,item);
			}
			char it;
			Pop(op,it);		//�������ŵ���
		} else if(Infix[i] == '(') {
			Push(op,Infix[i]);
		}
		else {
			// ���ʽ�е���������ȼ� <= ջ��Ԫ�أ��͵���ջ��Ԫ��
			while( !IsEmpty(op) && !cmp(Infix[i],GetTop(op)) ) {
				//printf("%c %c %d\n",Infix[i],GetTop(op),cmp(Infix[i],GetTop(op)));
				Postfix[index] = GetTop(op);
				index++;
				char item;
				Pop(op,item);
			}
			Push(op,Infix[i]);
		}
		//printf("��ʱ��������ݣ�%-20s\t,�μӵ�����ķ���%c\t\t",Postfix,Infix[i]);
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
