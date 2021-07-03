#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool JudgeForm(char str[]){
	int temp = 0;
	for(int j = 0; j < strlen(str); j++) {
		//只允许使用合法字符进行四则运算
		if(!(str[j] >= '0' && str[j] <= '9' || str[j] == '+' || str[j] == '-' || str[j]=='*'|| str[j] == '/' || str[j] == '(' || str[j] == ')' || str[j] == '.')) {
			return false;
		}
	}
	
	if(str[0] == '/' || str[0] == '*') {
		return false;
	}

	if(str[strlen(str) - 1] < '0' || str[strlen(str) - 1] > '9')  {
		return false;              //字符串首尾
	}

	for(int i = 0; i < strlen(str); i++) {      //括号使用不规范
		if(str[i] == '(') {
			if(i == 0 && (str[i + 1] == '*' || str[i + 1] == '/')) {
				return false;
			}
			else if(str[i - 1] >= '0' && str[i - 1] <= '9')    {            //左括号与运算符
				return false;
			}
			else if(str[i + 1] == ')')  {                //空括号问题 
				return false;
			}
			temp++;
		} else if(str[i] == ')') {
			if(i == 0) {
				return false;
			}
			else if(str[i - 1] == '+' || str[i - 1] == '*' || str[i - 1] == '-' || str[i - 1] == '/')
				return false;
			else if(str[i+1]>='0'&&str[i+1]<='9')//右括号与运算符
				return false;
			temp--;
		}
	}
	if(temp==0) {     //左括号与右括号匹配问题，temp==0时匹配
		return true;
	}	
	return false;
}