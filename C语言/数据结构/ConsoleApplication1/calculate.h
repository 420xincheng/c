int priority(char x);		//�������ȼ�
bool cmp(char x, char y);	//  ���ȼ�x > y ����true 
bool JudgeForm(char str[]);		//�ж�����

//model 1
int calculate(char* Postfix);	//�����׺���ʽ
char* convert(char* Infix) ;	//��׺ת��׺


//model 2
double operate (double num1,double num2,char op); //�Ӽ��˳��Ĳ���
double calvalue (char *Infix);			//��λ��������