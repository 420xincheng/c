#define FALSE 0
#define TRUE  1

//����ṹ�壨�������㣩
struct stack
{
	char* data;
	int top;
	int max;
};

//����С���Լ���λ��
struct stacknum {
	double* data;	
	int top;
	int max;
};


//����һЩ�������ú���(�����)
stack* Create(int maxlen);		//����һ��ջ
void Free(stack* S);			//�ͷ�һ��ջ
void Init(stack* S);			//ջ�ĳ�ʼ��
bool IsEmpty(stack* S);			//�ж�ջ�Ƿ�Ϊ��
void Push(stack* S,char x);		//ѹ������
int Pop(stack*S, char &x);		//��������
char GetTop(stack* S);			//��ȡջ��Ԫ��

//��������ջ��һЩ�������ú���
stacknum* CreateNum(int maxlen);			//����һ��ջ
void FreeNum(stacknum* L);					//�ͷ�һ��ջ
void InitNum(stacknum* L);					//ջ�ĳ�ʼ��
bool IsEmptyNum(stacknum* L);				//�ж�ջ�Ƿ�Ϊ��
void PushNum(stacknum* L,double num);		//ѹ������
double PopNum(stacknum*L, double &num);		//��������
bool GetTopNum(stacknum* L,double &num);	//��ȡջ��Ԫ��