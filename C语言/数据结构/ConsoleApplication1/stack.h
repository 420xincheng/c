#define FALSE 0
#define TRUE  1

//定义结构体（单个运算）
struct stack
{
	char* data;
	int top;
	int max;
};

//计算小数以及多位数
struct stacknum {
	double* data;	
	int top;
	int max;
};


//定义一些基本调用函数(运算符)
stack* Create(int maxlen);		//创建一个栈
void Free(stack* S);			//释放一个栈
void Init(stack* S);			//栈的初始化
bool IsEmpty(stack* S);			//判断栈是否为空
void Push(stack* S,char x);		//压入数据
int Pop(stack*S, char &x);		//弹出数据
char GetTop(stack* S);			//读取栈顶元素

//运算数的栈，一些基本调用函数
stacknum* CreateNum(int maxlen);			//创建一个栈
void FreeNum(stacknum* L);					//释放一个栈
void InitNum(stacknum* L);					//栈的初始化
bool IsEmptyNum(stacknum* L);				//判断栈是否为空
void PushNum(stacknum* L,double num);		//压入数据
double PopNum(stacknum*L, double &num);		//弹出数据
bool GetTopNum(stacknum* L,double &num);	//读取栈顶元素