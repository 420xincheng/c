




/*       顺序存储 线性表
#include <stdio.h>
#define OK 1
#define ERROR 0
#define MAXSIZE 100
typedef struct
{
	int elem[MAXSIZE];
	int last;
}seqlist;
seqlist L;
int locate (seqlist L,int e)
{
	int i=0;
	while((i<=L.last ) && (L.elem [i]!=e))
		i++;
	if(i<=L.last )
		return (i+1);
	else
		return -1;
}

int InsList (seqlist * L,int i,int e)   //在L中第i个数据元素之前插入一个元素e,i的合法取值1 =< i <= L->last
{
	int k;
	if((i<1) || (i>L->last+2))
	{
		printf("插入位置i值不合法");
		return (ERROR);
	}
	if(L->last >= MAXSIZE-1)
	{
		printf("表已满，无法插入");
		return (ERROR);
	}
	for(k = L->last ; k>=i-1; k--)
		L->elem[k+1] = L->elem[k];
	L->elem [i-1] = e;
	L->last ++;
	return (OK);
}
int DelList(seqlist *L,int i,int *e)
{
	int k;
	if(i<1 || i > L->last+1)
	{
		printf("删除位置不合法");
		return (ERROR);
	}
	*e = L->elem [i-1];
	for(k=i; i<=L->last ; k++)
		L->elem [k-1] = L->elem [k];
	L->last --;
	return (OK);
}
void mergeList(seqlist * LA,seqlist * LB,seqlist *LC )
{
	int i=0,j=0,k=0,l;
	while (i<=LA->last  && j <= LB->last )
		if(LA->elem [i] <= LB->elem [j])
			LC->elem [k++] = LA->elem [i++];
		else
			LC->elem [k++] = LB->elem [j++];
	while(i<= LA->last )
		LC->elem [k++] = LA->elem [i++];
	while(j<= LB->last )
		LC->elem [k++] = LB->elem [j++];
	LC->last = LA->last +LB->last +1;
}
int main()
{
	seqlist L;
	return 0;
}
*/
/*
#define OK 1
#define ERROR 0
#define maxsize 10
#include <stdio.h>
#include <stdlib.h>
typedef struct Node			//初始化单链表
{
	int data;
	struct Node * next;
}Node,*linklist;
 void Initlist(linklist *L)
{
	*L = (linklist)malloc(sizeof(Node));     //建立头结点
	(*L)->next = NULL ;			//建立空的单链表L
}
 void createfromhead(linklist L)

 {
	 Node *s;
	 char c;
	 int flag=1;
	 while(flag)
	 {
		 c = getchar();
		 if(c!='$')
		 {
			 s = (Node *)malloc(sizeof(Node));				//新建结点s
			 s->data = c;
			 s->next = L->next ;							//将s结点插入表头，先把原来指向第一个元素的链子给断了
			 L->next = s;
		 }
		 else
			 flag=0;
	 }
 }
 void CreateFromTail(linklist L)				//尾插法建立单链表
 {
	 Node *r,*s;
	 char c;
	 int flag=1;
	 r = L;
	 while(flag)
	 {
		 c=getchar();
		 if(c!='$')
		 {
			 s = (Node *)malloc(sizeof(Node));
			 s->data = c;
			 r->next = s;

		 }
	 }
 }
 Node * Get (linklist L,int i)			//查找第i个结点
 {
	 int j;
	 Node * p ;
	 if(i<=0) return NULL ;
	 p = L;j=0;
	 while((p->next != NULL )&&(j<i))
	 {
		 p = p->next ;
		 j++;
	 }
	 if(i==j)	return p;
	 else		return NULL ;
 }
 Node * Locate (linklist L,int key)			//在单链表中查找值为key的结点
 {
	 Node * p;
	 p = L->next ;				//从第一个结点开始
	 while(p!=NULL )
	 {
		 if(p->data != key)
			 p = p->next ;
		 else
			 break;
	 }
	 return p;
 }
 int listlength(linklist L)			//求单链表的长度
 {
	 Node * p;
	 p = L->next ;
	 int j=0;						//存放单链表的长度
	 while(p!=NULL )
	 {
		 p = p->next ;
		 j++;
	 }
	 return j;
 }
 //将长度为n的线性表变为n+1
int Initlist (linklist L,int i,int e)
{
	Node * pre,*s;
	int k;
	if(i<=0) return ERROR ;
	pre = L;k=0;
	while(pre!=NULL && k<i-1)
	{
		pre = pre->next ;
		k = k+1;
	}					//查找第i-1个结点
	if (pre==NULL )					//已找完但没找到
	{
		printf("插入位置不合理！");
		return ERROR ;
	}
	s =  (Node *)malloc(sizeof(Node));			//申请一个新的结点
	s->data = e;
	s->next  = pre->next ;
	pre->next = s;
	return OK ;
}
int dellist(linklist L,int i,int * e)			//将删除的变量保存到*e中
{
	Node *pre,*r;
	int k;
	pre = L;
	while(pre->next !=NULL && k<i-1)
	{
		pre = pre->next ;
		k++;
	}
	if(pre->next == NULL )
	{
		printf("删除结点位置i不合理！");
		return ERROR ;
	}
	r = pre->next ;					//此时r指向i结点
	pre->next  =  r->next ;
	*e = r->data ;
	free(r);
	return OK ;
}
linklist mergelinklist(linklist LA,linklist LB)			//合并两个有序链表
{
	Node * pa,* pb,*r;
	linklist LC;						//将LC初始置为空表，pa和pb飞别指向两个单链表，r初始值为LC,且始终指向LC的末尾
	pa = LA->next ;
	pb = LB->next ;
	LC = LA;
	LC->next = NULL;r = LC;			
	while(pa!=NULL && pb!=NULL )			//当两个表中均未处理完时，比较选择较小值点插入到LC中
	{
		if(pa->data <= pb->data )
		{r->next = pa; r = pa; pa = pa->next ;}
		else
		{r->next = pb; r = pb; pb = pb->next ;}
	}
	if(pa)			//若表LA未完，将表LA中后续元素链接到LC中
		r->next  =  pa;
	else
		r->next  =  pb;
	free(LB);
	return (LC);
}
void initclinklist(linklist * CL)			//CL用来接收待初始化的循环单链表的头指针变量的地址
{
	*CL = (linklist )malloc(sizeof(Node));			//建立头结点
	(*CL)->next = *CL;								//建立空的循环单链表
}
void createclinklist(linklist CL)		//CL是已经初始化好的、带头节点的空循环链表的头指针，通过键盘输入元素值，利用尾插法建立循环单链表CL
{
	Node * rear,*s;
	char c;
	rear  = CL;						//rear指针动态指向链表的当前表尾，其初值指向头结点
	c = getchar();
	while(c!='$')
	{
		s = (Node *)malloc(sizeof(Node));
		s->data = c;
		rear->next = s;
		rear = s;
		c = getchar();
	}
	rear->next = CL;				//让最后一个结点的next链域指向头结点
}
linklist merge(linklist LA,linklist LB)				//循环单链表的合并方法(两个采用头指针的循环单链表)
{
	Node *p,*q;
	p = LA;
	q = LB;
	while(p->next !=LA) p = p->next ;
	while(q->next !=LB) q = q->next ;			//找到两个链的表尾，并用指针指向他
	q->next = LA;							//使LB得尾指针指向LA的头结点
	p->next = LB->next ;					//使LA得尾指针指向LB的第一个结点
	free(LB);
	return(LA);
}
linklist merge2(linklist LA,linklist LB)					//(采用尾指针)
{
	Node *p;
	p = LA->next ;							//保存LA的头结点地址
	LA->next = LB->next ->next ;			//将LB的开始结点链接到LA的终端结点（LA的头接在LB的尾）
	free(LB->next);							//释放LB的头结点
	LB ->next = p;							//LA的头结点链接到LB的终端结点之后（LA的头接在LB的尾部）
	return LB;
}
typedef struct dnode
{
	int data;
	struct dnode * prior,*next;
}dnode,*doublelist;
int dlinkins(doublelist L,int i,int e)			//双向链表的插入
{
	dnode * s,*p;
	s = (dnode *)malloc(sizeof(dnode));
	if(s)
	{
		s->data = e;
		s->prior = p->prior ;				//使s->prior指向指针p前面的那个数
		p->prior ->next = s;				//p前面那个结点的next存放s的地址
		s->next = p;
		p->prior = s;
		return true;
	}
	else
		return false;
}
int dlinkdel(doublelist L,int i,int *e)			//双链表的删除
{
	dnode * p;
	*e = p->data;
	p->prior ->next = p->next ;				//使p的前一个结点的next存放p的后一个结点的地址
	p->next->prior  = p->prior ;			//使p的下一个结点的prior指向p的前一个结点的next
	free(p);
	return true;
}
typedef struct							//静态链表的描述
{
	int data;
	int cursor;
}component,staticlist[maxsize];
void initial(staticlist space,int * av)
{
	int k;
	space[0].cursor = -1;				//space[0]相当于头节点
	for(k=1; k<maxsize-1; k++)
		space[k].cursor = k+1;			//连链
	space[maxsize-1].cursor = -1;		//标记链尾
	*av = 1;							//设置备用链表头指针初值
}
int getnode(staticlist space,int *av)
{
	int i;
	i = *av;
	*av = space[*av].cursor ;
	return i;
}
typedef struct polynode
{
	int coef;				//系数
	int exp;				//指数
	struct polynode *next;

}polynode,*polylist;
polylist polycreate()				//尾插法建立一元多项式的链表
{
	polynode * head,*rear,*s;
	int c,e;
	head = (polynode*)malloc(sizeof(polynode));				//建立多项式的头结点
	rear = head;											//rear始终指向单链表的表尾，便于尾插法建表
	scanf("%d,%d",&c,&e);									//输入多项式的系数和指数项
	while(c!=0)
	{
		s = (polynode *)malloc(sizeof(polynode));			//申请一个新的结点
		s->coef = c;
		s->exp = e;
		rear->next = s;
		rear  =  s;
		scanf("%d,%d",&c,&e);
	}
	rear->next = NULL ;
	return (head);
}
void polyadd(polylist polya,polylist polyb)					//多项式相加
{
	polynode * p,*q,*tail,*t;
	int sum;
	p = polya->next;
	q = polyb->next;						//使p和q分别指向polya和polyb多项式链表的第一个结点
	tail = polya;							//tail指向和多项式的尾结点
	while(p!=NULL && q!=NULL)
	{
		if(p->exp < q->exp )			//将p结点加入到和多项式中
		{tail->next = p;  tail = p;  p = p->next; }
		else if(p->exp == q->exp )
		{sum = p->coef + q->coef;
			if(sum!=0)					//系数和非0，p加入到和多项式，释放结点q，并将指针后移
				{p->coef = sum;
				tail->next = p;
				tail = p;
				p = p->next ;
				t = q; q = q->next ; free(q);
			}
			else
			{
				t = p;p = p->next ;free(t);							//系数和为0，删除结点p和q,并将指向下一个结点
				t = q;q = q->next ;free(t);
			}
			
		}
		else
		{
			tail->next = q; tail = q; q = q->next ;
		}
	}
	if(p!=NULL )						//若a中还有剩余，则将剩余的结点加入到和多项式中
		tail = p->next ;
	else                                //否则将B 加入和多项式中
		tail = q->next ;
}
*/
	/*
#include <stdio.h>
#include <stdlib.h>
#define size 50
#define M 100
#define N 10			//N个链栈
typedef struct
{
	int elem[size];				//用来存放栈中元素的一维数组
	int top;					//存放栈顶元素的下标，top=-1表示空栈
}seqstack;

typedef struct                        //多栈共享
{
	int stack[M];				//stack[M]为栈区
	int top[2];					//top[0]和top[1]分别为两个栈顶指示器
}dqstack;

void initstack(seqstack *m)			//初始化顺序栈
{
	m->top = -1;
}

void initstack(dqstack *m )                    //初始化双端顺序栈
{
	m->top[0] = -1;
	m->top[1] = M;
}

int push (seqstack *s,int x)     //将x置入s栈新栈顶
{
	if(s->top == size-1)  return (false);				//栈已满
	s->top ++;                    //修改栈顶指针
	s->elem [s->top ] = x;        //x进栈
	return true;
}

int push(dqstack *m,int x,int i)			//把x压入i号堆栈
{
	if (m->top[0]+1 == m->top[1])			//栈已满
		return false;
	switch(i)
	{
	case 0:					//0号栈
		m->top [0]++;
		m->stack [m->top[0]] = x;
		break;
	case 1:					//1号栈
		m->top[1]--;
		m->stack[m->top[1]] = x;
		break;
	default:
		return false;
	} 
	return true;
}

int pop(seqstack *s,int *x)				//将栈顶元素弹出，放到x所指的空间带出
{
	if(s->top == -1)
		return false;
	else
	{
		*x = s->elem [s->top];
		s->top--;
		return true;
	}
}

int push(dqstack *m,int *x,int i)					//双端顺序栈出栈操作
{
	switch(i)
	{
	case 0:
		if(m->top[0] == -1) return false;
		*x = m->stack[m->top[0]];
		m->top[0]--;
		break;
	case 1:
		if(m->top[1] == M) return false;
		*x = m->stack[m->top[1]];
		m->top[1]++;
		break;
	default :
		return false;
	}
	return true;
}
int gettop(seqstack *s,int *x)
{
	if(s->top == -1)
		return false;
	else
	{
		*x = s->elem [s->top];
		return true;
	}
}

typedef struct node					//定义链栈
{
	int data;
	struct node *next;
}linkstacknode;
typedef linkstacknode * linkstack;

int push(linkstack top,int x)				//链栈进栈
{
	linkstacknode *t;
	t = (linkstacknode*)malloc(sizeof(linkstacknode));
	if(t == NULL)		return false;
	t->data = x;
	t->next = top->next ;
	top->next = t;
	return true;
}

int pop (linkstack top,int *x)				//链栈出栈操作
{
	linkstacknode *t;
	t = top->next;
	if(t == NULL)
		return false;
	top->next = t->next;
	*x = t->data;
	free(t);
	return true;
}
typedef struct node
{
	int data;
	struct node *next;
}linkstacknode,*linkstack;
linkstack top[N];						//分别指向N个不同的链栈




void hanoi(int n,char x,char y,char z)
{
	if(n==1)
		move(x,1,z);					//将编号为1的圆盘从x移动到z
	else
	{
		hanoi(n-1,x,z,y);				//将x上编号为1至n-1的圆盘移动到y
		move(x,n,z);					//将编号为n的圆盘从x移动到z
		hanoi(n-1,y,x,z);				//将y上编号为1到n-1的圆盘移动到z
	}
}

int fib(int n)
{
	int x,y,z,i;
	if(n==0 || n==1) return n;
	else
	{
		x = 0; y = 1;
		for(i=2;i<=n;i++)
		{
			z = y;
			y = x+y;
			x = z;
		}
		return y;
	}
}
*/
/*
//这个代码测试求多项式的值 
#include <stdio.h>
#include <malloc.h> 
#include <stddef.h>
#include <math.h>
typedef struct node 
      {     int c;   //系数  
            int e;   //指数  
            node *next; 
       } Node,  * LinkList; 

void InitList(LinkList *pH)
{ 
*pH=(LinkList)malloc(sizeof(Node));
(*pH)->next=NULL;
} 

void CreateFromTail(LinkList H)
{  Node  *r,*s; 
   int c,e;
   r=H;
  
   while(true){	
	scanf("%d %d",&c,&e);
	if(e<0) return;
	else{
		s=(Node*)malloc(sizeof(Node)); 
	    s->c=c; 
	 	s->e=e;
	 	s->next=NULL;
	 	r->next=s;  
	 	r=s;
	}
}
}

void PrintList(LinkList H){
	H=H->next;
	
	while (H!=NULL){		
		printf("+%dX**%d",H->c,H->e);
		H=H->next;
	}
	printf("\n");
}

void add(LinkList H1, LinkList H2){
	Node * p,*q, *pre,*temp;
	int sum;
	
	p=H1->next;
	q=H2->next;
	pre=H1;     // 要保证pre->next==p,即pre是p的前一个结点位置。 在p前面插入一个结点时要用到。 
	free(H2);   //既然要合并，H2的头节点已经没用了，释放掉。 
	
	while (p!=NULL && q != NULL){
		 if (p->e < q->e){  //p的指数较小 ，p往后移 
		    pre=p;
			p=p->next; 
		 }
         else if ( p->e==q->e) { //指数相等时，系数求和 
		    sum=p->c + q->c;
			if (sum!=0){ // 系数和非0，把它作为p结点的系数，释放q结点 
			  p->c=sum; 
			  pre=p;
			  p=p->next;
			  
			  temp=q;
			  q=q->next;
			  free(temp);
			}
            else{  // 该系数和为0时，释放p,q两个结点 。 
			  temp=p;
			  p=p->next;
			  pre->next=p ;
			  free(temp);
			  
			  temp=q;
			  q=q->next;
			  free(temp );
			} 
         } 
         else{   // p的指数较大，则把q插到p之前 
		    temp=q->next;
			pre->next=q;
			q->next=p;
			q=temp; 
		}
	}
	if (p==NULL)  pre->next=q; // p先到尾部，则把q接在p后面。
}

double value(LinkList H, double x){
	Node * p;
	double result=0;
	p=H->next;
	while(p!=NULL){
		result += p->c*pow(x, p->e);
		p=p->next;
	}
	return result;
}

*/ 
/*	
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n,*a,*b,i,relax=0;
	scanf("%d",&n);
	a = (int*)malloc(sizeof(int)*n);
	b = (int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(i=0; i<n; i++)
		scanf("%d",&b[i]);
	for(i=0,j=0;i<n ;i++,j++)
		{
			if(a[i]==b[j] && a[i]==0)
				relax++;
		}
	return 0;
}*/	




/*
#include<stdio.h>
void main()
{
	int n,i,j,m,k;
	scanf("%d",&n);
	k=2*n;
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=k;j++){
			printf(" ");
		}
		for(m=1;m<=i;m++)
		{
			printf("*");
		}
		k=k-2;
		printf("\n");
	}
	k=2*(n-1);
	for(i=1;i<=n;i++)
	{
		for(j=2*n;j>k;j--)
		{
			printf(" ");
		}
		for(m=n+1;m>i;m--){
			printf("*");
		}
		k=k-2;
		printf("\n");
	}
}
*/
/*
#include <stdio.h>
int main ()
{
	int n,val ,i ,j ,k , m,g;
	while (1){
		scanf("%d",&val);
		g = m = n = val;
		if(n>=2 && n<=20)
		{
			for(i=1; i<=n+1; i++)
				{
					for(k=1; k<=2*g; k++)
						printf(" ");
					g--;
					for (j=1;j<=i;j++)
						printf("*");
					printf("\n");

				}
			for (i=1,m=2;i<=n; i++)
			{
				
				for(j=1; j<=m; j++)
					printf(" ");
				m+=2;
				for(k=n+1-i; k>0; k--)
					printf("*");
				
				printf("\n");
			}
		}
		else
			break;
	}
	return 0;
}
*/
/*
#define  elementtype int
#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
	elementtype data;				//数据域
	struct node *next;					//指针域
}linkqueuenode;

typedef struct
{
	linkqueuenode * front;
	linkqueuenode * rear;
}linkqueue;

int initqueue (linkqueue * q)			//队初始化
{
	q->front = (linkqueuenode *)malloc (sizeof(linkqueuenode));
	if (q->front != NULL)
	{
		q->rear = q->front ;
		q->front->next = NULL;
		return true;
	}
	else
		return false;				//队溢出
}
int enterqueue (linkqueue * q,elementtype x)			//链队列入队
{
	//将x入队
	linkqueuenode * newnode;
	newnode = (linkqueuenode *)malloc(sizeof(linkqueuenode));
	if(newnode != NULL )
	{
		newnode->data = x;
		newnode->next = NULL;
		q->rear->next = newnode;
		q->rear = newnode;
		return true;
	}
	else
		return false;
}

int deletequeue (linkqueue * q,elementtype * x)			//链队列出队
{
	//将队头元素出队，并存放到x所指的存储空间中
	linkqueuenode *p;
	if (q->front == q->rear)
		return false;
	p = q->front->next ;
	q->front->next = p->next ;					//队头p出队
	if (q->rear == p)							//队中只有一个元素，p出队后成为空队
		q->rear = q->front ;
	* x = p->data;
	free(p);
	return true;
}
linkqueue q;
void seedoctor ()
{
	int n;
	char ch;
	char getch();
	initqueue (&q);
	int isempty();
	int flag = 1;
	while(flag)
	{
		printf("\n请输入命令：");
		ch = getch();
		switch(ch){
		case 'a':printf("\n病历号：");
			scanf("%d",&n);
			enterqueue(&q,n);
			break;
		case 'n':if(!isempty(q))
				 {
					 deletequeue(&q,&n);
					 printf("\n病历号为%d的病人就诊",n);
				 }
				 else
					 printf("\n无病人等候就诊");
			break;
		case 'q':printf("\n今天停止挂号，下列病人依次就诊：");
			while(!isempty(q))
			{
				deletequeue(&q,&n);
				printf("%d",n);
			}
			flag = 0;
			break;
		default:
			printf("\n非法命令！");
		}
	}
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#define maxlen 40
typedef struct {
	char ch [maxlen];
	int len;
}sstring;

typedef struct {
	char *ch;
	int len;
}hstring;				//堆串的定义

int strinsert(sstring * s,int pos,sstring t)
{
	//在串s中下标为pos的字符串之前插入串t
	int i;
	if (pos<0 || pos > s->len)
		return 0;
	if(s->len + t.len <= maxlen)			//插入后串长<=maxlen
	{
		for(i = s->len+t.len; i>=t.len+pos; i--)
			s->ch[i] = s->ch[i-t.len];
		for(i=0; i<t.len; i++)
			s->ch[i+pos] = t.ch[i];
		s->len = s->len + t.len ;
	}
	else if (pos+t.len <= maxlen)				//插入后串长大于maxlen,但t的字符序列可以全部插入
	{
		for(i = maxlen-1; i>t.len+pos-1; i--)
			s->ch[i] = s->ch[i-t.len];
		for(i=0; i<t.len; i++)
			s->ch[i+pos] = t.ch[i];
		s->len = maxlen;
	}
	else                                        //插入串后串长>maxlen，并且t的部分字符也要舍弃
	{
		for(i=0; i<maxlen-pos; i++ )
			s->ch[i+pos] = t.ch[i];
		s->len = maxlen;
	}
	return 1;
}
int strdelete (sstring * s,int pos,int len)				//在串s中删除从下标 pos起 len个字符
{
	int i;
	if (pos<0 || pos > (s->len-len))
		return 0;
	for (i=pos+len; i<s->len; i++)
		s->ch[i-len] = s->ch[i];
	s->len = s->len-len;
	return 1;
}
int strcompare (sstring s,sstring t)
{
	//串s和t相等返回0，大于返回正数，小于返回负数
	int i;
	for(i=0; i<s.len && i<t.len; i++)
		if (s.ch[i]!=t.ch[i]) return (s.ch[i]-t.ch[i]);
	return (s.len - t.len);
}
int strindex(sstring s,int pos,sstring t)					//顺序串的简单模式定位函数
{
	int i,j,start;
	if(t.len == 0) return 0;
	start = pos; i=start; j=0;				//主串从pos开始，模式串从头开始
	while(i<s.len && j<t.len)
		if(s.ch[i] == t.ch[j])
		{i++;j++;}						//字符串相等时推进
		else
		{
			start++;					//当前字符不对等时回溯
			i = start;						//大不了从头再来
			j = 0;
		}
		if (j>=t.len ) return start;
		else  return -1;

}
int strinsert (hstring *s,int pos,hstring *t)
{
	//在串s下标为pos的字符之前插入串t
	int i;
	char *temp;
	if (pos<0 || pos > s->len || s->len == 0)     return 0;
	temp = (char*)malloc(s->len + t->len);			//动态产生足够的空间存放插入后的串
	if (temp == NULL) return 0;
	for (i=0; i<pos; i++)    temp[i] = s->ch[i];
	for (i=0; i<t->len; i++)  temp[i+pos] = t->ch[i];
	for (i=pos; i< s->len; i++ )    temp[i+t->len] = s->ch[i];
	s->len = s->len+t->len;
	free(s->ch);
	s->ch = temp;
	return 1;
}
int strassign (hstring * s,char * tval)				//堆串赋值函数
{
	//将字符串常量tval的值赋给堆串s
	int len,i=0;
	if (s->ch!=NULL) free(s->ch);
	while (tval[i]!='\0') i++;
	len = i;
	if (len)
	{
		s->ch = (char*)malloc(len);
		if(s->ch == NULL )  return 0;
		for (i=0; i<len; i++)   s->ch[i] = tval[i];
	}
	else
		s->ch = NULL;
	s->len = len;
	return 1;
}
#define block_size 4
typedef struct block {
	char ch[block_size];
	struct block *next;
}block;
typedef struct {
	block * head;
	block * tail;
	int len;
}blstring;
*/
	/*
#define maxsize 1000
#define elementtype int
	typedef struct 
{
	int row,col;
	elementtype e;						//该非零元素的值
}triple;
typedef struct 
{
	triple data[maxsize+1];				//非零元素的三元组表，data[0]未用
	int m,n,len;						//矩阵的行数，列，和非零元素的个数
}tsmatrix;
void transposetsmatrix (tsmatrix a,tsmatrix *b)
{
	//把a转置到b所指的矩阵中，矩阵用三元组表表示
	int i,j,k;
	b->m = a.n ; b->n = a.m;  b->len = a.len;
	if (b->len > 0)
	{
		j=1;					//j为辅助计数器，记录转置后的三元组在三元组表b中的下标值
		for (k=1; k<=a.n; k++)				//扫描三元组表a共a.n次，每次寻找列值为k的三元组进行转置
			for (i=1; i<=a.len; i++)
				if (a.data[i].col == k)
				{
					b->data[j].row = a.data[i].col;
					b->data[j].col = a.data[i].row;
					b->data[j].e   = a.data[i].e ;
					j++;							//计数器加1，指向本行下一个转置后元素的位置 下标
				}
	}
}*/
/*
#include <iostream>
using namespace std;

int main (){
	int x,p=1000;
	cin >> x;
	if(x/p) {
		cout << 4 <<endl;
		while(x/p){
			cout << x/p << endl;
			x %=p;
			p /=10;
		}
	}
	else if (x/(p/10)){
		cout << 3 <<endl;
		p /=10;  
		while(x/p){
			cout << x/p << endl;
			x %= p;
			p /=10;
		}
	}
	else if (x/(p/100)){
		cout << 2 <<endl;p/=100;
		while(x/p){
			cout << x/p << endl;
			x %= p;
			p /=10;
		}
	}
	else {
		cout << 1 << endl;
		cout << x << endl;
	}
	return 0;
}*/

