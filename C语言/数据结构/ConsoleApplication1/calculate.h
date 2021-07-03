int priority(char x);		//返回优先级
bool cmp(char x, char y);	//  优先级x > y 返回true 
bool JudgeForm(char str[]);		//判断输入

//model 1
int calculate(char* Postfix);	//处理后缀表达式
char* convert(char* Infix) ;	//中缀转后缀


//model 2
double operate (double num1,double num2,char op); //加减乘除的操作
double calvalue (char *Infix);			//多位数的运算