#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool JudgeForm(char str[]){
	int temp = 0;
	for(int j = 0; j < strlen(str); j++) {
		//ֻ����ʹ�úϷ��ַ�������������
		if(!(str[j] >= '0' && str[j] <= '9' || str[j] == '+' || str[j] == '-' || str[j]=='*'|| str[j] == '/' || str[j] == '(' || str[j] == ')' || str[j] == '.')) {
			return false;
		}
	}
	
	if(str[0] == '/' || str[0] == '*') {
		return false;
	}

	if(str[strlen(str) - 1] < '0' || str[strlen(str) - 1] > '9')  {
		return false;              //�ַ�����β
	}

	for(int i = 0; i < strlen(str); i++) {      //����ʹ�ò��淶
		if(str[i] == '(') {
			if(i == 0 && (str[i + 1] == '*' || str[i + 1] == '/')) {
				return false;
			}
			else if(str[i - 1] >= '0' && str[i - 1] <= '9')    {            //�������������
				return false;
			}
			else if(str[i + 1] == ')')  {                //���������� 
				return false;
			}
			temp++;
		} else if(str[i] == ')') {
			if(i == 0) {
				return false;
			}
			else if(str[i - 1] == '+' || str[i - 1] == '*' || str[i - 1] == '-' || str[i - 1] == '/')
				return false;
			else if(str[i+1]>='0'&&str[i+1]<='9')//�������������
				return false;
			temp--;
		}
	}
	if(temp==0) {     //��������������ƥ�����⣬temp==0ʱƥ��
		return true;
	}	
	return false;
}