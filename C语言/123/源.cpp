




/*       ˳��洢 ���Ա�
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

int InsList (seqlist * L,int i,int e)   //��L�е�i������Ԫ��֮ǰ����һ��Ԫ��e,i�ĺϷ�ȡֵ1 =< i <= L->last
{
	int k;
	if((i<1) || (i>L->last+2))
	{
		printf("����λ��iֵ���Ϸ�");
		return (ERROR);
	}
	if(L->last >= MAXSIZE-1)
	{
		printf("���������޷�����");
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
		printf("ɾ��λ�ò��Ϸ�");
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
typedef struct Node			//��ʼ��������
{
	int data;
	struct Node * next;
}Node,*linklist;
 void Initlist(linklist *L)
{
	*L = (linklist)malloc(sizeof(Node));     //����ͷ���
	(*L)->next = NULL ;			//�����յĵ�����L
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
			 s = (Node *)malloc(sizeof(Node));				//�½����s
			 s->data = c;
			 s->next = L->next ;							//��s�������ͷ���Ȱ�ԭ��ָ���һ��Ԫ�ص����Ӹ�����
			 L->next = s;
		 }
		 else
			 flag=0;
	 }
 }
 void CreateFromTail(linklist L)				//β�巨����������
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
 Node * Get (linklist L,int i)			//���ҵ�i�����
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
 Node * Locate (linklist L,int key)			//�ڵ������в���ֵΪkey�Ľ��
 {
	 Node * p;
	 p = L->next ;				//�ӵ�һ����㿪ʼ
	 while(p!=NULL )
	 {
		 if(p->data != key)
			 p = p->next ;
		 else
			 break;
	 }
	 return p;
 }
 int listlength(linklist L)			//������ĳ���
 {
	 Node * p;
	 p = L->next ;
	 int j=0;						//��ŵ�����ĳ���
	 while(p!=NULL )
	 {
		 p = p->next ;
		 j++;
	 }
	 return j;
 }
 //������Ϊn�����Ա��Ϊn+1
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
	}					//���ҵ�i-1�����
	if (pre==NULL )					//�����굫û�ҵ�
	{
		printf("����λ�ò�����");
		return ERROR ;
	}
	s =  (Node *)malloc(sizeof(Node));			//����һ���µĽ��
	s->data = e;
	s->next  = pre->next ;
	pre->next = s;
	return OK ;
}
int dellist(linklist L,int i,int * e)			//��ɾ���ı������浽*e��
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
		printf("ɾ�����λ��i������");
		return ERROR ;
	}
	r = pre->next ;					//��ʱrָ��i���
	pre->next  =  r->next ;
	*e = r->data ;
	free(r);
	return OK ;
}
linklist mergelinklist(linklist LA,linklist LB)			//�ϲ�������������
{
	Node * pa,* pb,*r;
	linklist LC;						//��LC��ʼ��Ϊ�ձ�pa��pb�ɱ�ָ������������r��ʼֵΪLC,��ʼ��ָ��LC��ĩβ
	pa = LA->next ;
	pb = LB->next ;
	LC = LA;
	LC->next = NULL;r = LC;			
	while(pa!=NULL && pb!=NULL )			//���������о�δ������ʱ���Ƚ�ѡ���Сֵ����뵽LC��
	{
		if(pa->data <= pb->data )
		{r->next = pa; r = pa; pa = pa->next ;}
		else
		{r->next = pb; r = pb; pb = pb->next ;}
	}
	if(pa)			//����LAδ�꣬����LA�к���Ԫ�����ӵ�LC��
		r->next  =  pa;
	else
		r->next  =  pb;
	free(LB);
	return (LC);
}
void initclinklist(linklist * CL)			//CL�������մ���ʼ����ѭ���������ͷָ������ĵ�ַ
{
	*CL = (linklist )malloc(sizeof(Node));			//����ͷ���
	(*CL)->next = *CL;								//�����յ�ѭ��������
}
void createclinklist(linklist CL)		//CL���Ѿ���ʼ���õġ���ͷ�ڵ�Ŀ�ѭ�������ͷָ�룬ͨ����������Ԫ��ֵ������β�巨����ѭ��������CL
{
	Node * rear,*s;
	char c;
	rear  = CL;						//rearָ�붯ָ̬������ĵ�ǰ��β�����ֵָ��ͷ���
	c = getchar();
	while(c!='$')
	{
		s = (Node *)malloc(sizeof(Node));
		s->data = c;
		rear->next = s;
		rear = s;
		c = getchar();
	}
	rear->next = CL;				//�����һ������next����ָ��ͷ���
}
linklist merge(linklist LA,linklist LB)				//ѭ��������ĺϲ�����(��������ͷָ���ѭ��������)
{
	Node *p,*q;
	p = LA;
	q = LB;
	while(p->next !=LA) p = p->next ;
	while(q->next !=LB) q = q->next ;			//�ҵ��������ı�β������ָ��ָ����
	q->next = LA;							//ʹLB��βָ��ָ��LA��ͷ���
	p->next = LB->next ;					//ʹLA��βָ��ָ��LB�ĵ�һ�����
	free(LB);
	return(LA);
}
linklist merge2(linklist LA,linklist LB)					//(����βָ��)
{
	Node *p;
	p = LA->next ;							//����LA��ͷ����ַ
	LA->next = LB->next ->next ;			//��LB�Ŀ�ʼ������ӵ�LA���ն˽�㣨LA��ͷ����LB��β��
	free(LB->next);							//�ͷ�LB��ͷ���
	LB ->next = p;							//LA��ͷ������ӵ�LB���ն˽��֮��LA��ͷ����LB��β����
	return LB;
}
typedef struct dnode
{
	int data;
	struct dnode * prior,*next;
}dnode,*doublelist;
int dlinkins(doublelist L,int i,int e)			//˫������Ĳ���
{
	dnode * s,*p;
	s = (dnode *)malloc(sizeof(dnode));
	if(s)
	{
		s->data = e;
		s->prior = p->prior ;				//ʹs->priorָ��ָ��pǰ����Ǹ���
		p->prior ->next = s;				//pǰ���Ǹ�����next���s�ĵ�ַ
		s->next = p;
		p->prior = s;
		return true;
	}
	else
		return false;
}
int dlinkdel(doublelist L,int i,int *e)			//˫�����ɾ��
{
	dnode * p;
	*e = p->data;
	p->prior ->next = p->next ;				//ʹp��ǰһ������next���p�ĺ�һ�����ĵ�ַ
	p->next->prior  = p->prior ;			//ʹp����һ������priorָ��p��ǰһ������next
	free(p);
	return true;
}
typedef struct							//��̬���������
{
	int data;
	int cursor;
}component,staticlist[maxsize];
void initial(staticlist space,int * av)
{
	int k;
	space[0].cursor = -1;				//space[0]�൱��ͷ�ڵ�
	for(k=1; k<maxsize-1; k++)
		space[k].cursor = k+1;			//����
	space[maxsize-1].cursor = -1;		//�����β
	*av = 1;							//���ñ�������ͷָ���ֵ
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
	int coef;				//ϵ��
	int exp;				//ָ��
	struct polynode *next;

}polynode,*polylist;
polylist polycreate()				//β�巨����һԪ����ʽ������
{
	polynode * head,*rear,*s;
	int c,e;
	head = (polynode*)malloc(sizeof(polynode));				//��������ʽ��ͷ���
	rear = head;											//rearʼ��ָ������ı�β������β�巨����
	scanf("%d,%d",&c,&e);									//�������ʽ��ϵ����ָ����
	while(c!=0)
	{
		s = (polynode *)malloc(sizeof(polynode));			//����һ���µĽ��
		s->coef = c;
		s->exp = e;
		rear->next = s;
		rear  =  s;
		scanf("%d,%d",&c,&e);
	}
	rear->next = NULL ;
	return (head);
}
void polyadd(polylist polya,polylist polyb)					//����ʽ���
{
	polynode * p,*q,*tail,*t;
	int sum;
	p = polya->next;
	q = polyb->next;						//ʹp��q�ֱ�ָ��polya��polyb����ʽ����ĵ�һ�����
	tail = polya;							//tailָ��Ͷ���ʽ��β���
	while(p!=NULL && q!=NULL)
	{
		if(p->exp < q->exp )			//��p�����뵽�Ͷ���ʽ��
		{tail->next = p;  tail = p;  p = p->next; }
		else if(p->exp == q->exp )
		{sum = p->coef + q->coef;
			if(sum!=0)					//ϵ���ͷ�0��p���뵽�Ͷ���ʽ���ͷŽ��q������ָ�����
				{p->coef = sum;
				tail->next = p;
				tail = p;
				p = p->next ;
				t = q; q = q->next ; free(q);
			}
			else
			{
				t = p;p = p->next ;free(t);							//ϵ����Ϊ0��ɾ�����p��q,����ָ����һ�����
				t = q;q = q->next ;free(t);
			}
			
		}
		else
		{
			tail->next = q; tail = q; q = q->next ;
		}
	}
	if(p!=NULL )						//��a�л���ʣ�࣬��ʣ��Ľ����뵽�Ͷ���ʽ��
		tail = p->next ;
	else                                //����B ����Ͷ���ʽ��
		tail = q->next ;
}
*/
	/*
#include <stdio.h>
#include <stdlib.h>
#define size 50
#define M 100
#define N 10			//N����ջ
typedef struct
{
	int elem[size];				//�������ջ��Ԫ�ص�һά����
	int top;					//���ջ��Ԫ�ص��±꣬top=-1��ʾ��ջ
}seqstack;

typedef struct                        //��ջ����
{
	int stack[M];				//stack[M]Ϊջ��
	int top[2];					//top[0]��top[1]�ֱ�Ϊ����ջ��ָʾ��
}dqstack;

void initstack(seqstack *m)			//��ʼ��˳��ջ
{
	m->top = -1;
}

void initstack(dqstack *m )                    //��ʼ��˫��˳��ջ
{
	m->top[0] = -1;
	m->top[1] = M;
}

int push (seqstack *s,int x)     //��x����sջ��ջ��
{
	if(s->top == size-1)  return (false);				//ջ����
	s->top ++;                    //�޸�ջ��ָ��
	s->elem [s->top ] = x;        //x��ջ
	return true;
}

int push(dqstack *m,int x,int i)			//��xѹ��i�Ŷ�ջ
{
	if (m->top[0]+1 == m->top[1])			//ջ����
		return false;
	switch(i)
	{
	case 0:					//0��ջ
		m->top [0]++;
		m->stack [m->top[0]] = x;
		break;
	case 1:					//1��ջ
		m->top[1]--;
		m->stack[m->top[1]] = x;
		break;
	default:
		return false;
	} 
	return true;
}

int pop(seqstack *s,int *x)				//��ջ��Ԫ�ص������ŵ�x��ָ�Ŀռ����
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

int push(dqstack *m,int *x,int i)					//˫��˳��ջ��ջ����
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

typedef struct node					//������ջ
{
	int data;
	struct node *next;
}linkstacknode;
typedef linkstacknode * linkstack;

int push(linkstack top,int x)				//��ջ��ջ
{
	linkstacknode *t;
	t = (linkstacknode*)malloc(sizeof(linkstacknode));
	if(t == NULL)		return false;
	t->data = x;
	t->next = top->next ;
	top->next = t;
	return true;
}

int pop (linkstack top,int *x)				//��ջ��ջ����
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
linkstack top[N];						//�ֱ�ָ��N����ͬ����ջ




void hanoi(int n,char x,char y,char z)
{
	if(n==1)
		move(x,1,z);					//�����Ϊ1��Բ�̴�x�ƶ���z
	else
	{
		hanoi(n-1,x,z,y);				//��x�ϱ��Ϊ1��n-1��Բ���ƶ���y
		move(x,n,z);					//�����Ϊn��Բ�̴�x�ƶ���z
		hanoi(n-1,y,x,z);				//��y�ϱ��Ϊ1��n-1��Բ���ƶ���z
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
//���������������ʽ��ֵ 
#include <stdio.h>
#include <malloc.h> 
#include <stddef.h>
#include <math.h>
typedef struct node 
      {     int c;   //ϵ��  
            int e;   //ָ��  
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
	pre=H1;     // Ҫ��֤pre->next==p,��pre��p��ǰһ�����λ�á� ��pǰ�����һ�����ʱҪ�õ��� 
	free(H2);   //��ȻҪ�ϲ���H2��ͷ�ڵ��Ѿ�û���ˣ��ͷŵ��� 
	
	while (p!=NULL && q != NULL){
		 if (p->e < q->e){  //p��ָ����С ��p������ 
		    pre=p;
			p=p->next; 
		 }
         else if ( p->e==q->e) { //ָ�����ʱ��ϵ����� 
		    sum=p->c + q->c;
			if (sum!=0){ // ϵ���ͷ�0��������Ϊp����ϵ�����ͷ�q��� 
			  p->c=sum; 
			  pre=p;
			  p=p->next;
			  
			  temp=q;
			  q=q->next;
			  free(temp);
			}
            else{  // ��ϵ����Ϊ0ʱ���ͷ�p,q������� �� 
			  temp=p;
			  p=p->next;
			  pre->next=p ;
			  free(temp);
			  
			  temp=q;
			  q=q->next;
			  free(temp );
			} 
         } 
         else{   // p��ָ���ϴ����q�嵽p֮ǰ 
		    temp=q->next;
			pre->next=q;
			q->next=p;
			q=temp; 
		}
	}
	if (p==NULL)  pre->next=q; // p�ȵ�β�������q����p���档
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
	elementtype data;				//������
	struct node *next;					//ָ����
}linkqueuenode;

typedef struct
{
	linkqueuenode * front;
	linkqueuenode * rear;
}linkqueue;

int initqueue (linkqueue * q)			//�ӳ�ʼ��
{
	q->front = (linkqueuenode *)malloc (sizeof(linkqueuenode));
	if (q->front != NULL)
	{
		q->rear = q->front ;
		q->front->next = NULL;
		return true;
	}
	else
		return false;				//�����
}
int enterqueue (linkqueue * q,elementtype x)			//���������
{
	//��x���
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

int deletequeue (linkqueue * q,elementtype * x)			//�����г���
{
	//����ͷԪ�س��ӣ�����ŵ�x��ָ�Ĵ洢�ռ���
	linkqueuenode *p;
	if (q->front == q->rear)
		return false;
	p = q->front->next ;
	q->front->next = p->next ;					//��ͷp����
	if (q->rear == p)							//����ֻ��һ��Ԫ�أ�p���Ӻ��Ϊ�ն�
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
		printf("\n���������");
		ch = getch();
		switch(ch){
		case 'a':printf("\n�����ţ�");
			scanf("%d",&n);
			enterqueue(&q,n);
			break;
		case 'n':if(!isempty(q))
				 {
					 deletequeue(&q,&n);
					 printf("\n������Ϊ%d�Ĳ��˾���",n);
				 }
				 else
					 printf("\n�޲��˵Ⱥ����");
			break;
		case 'q':printf("\n����ֹͣ�Һţ����в������ξ��");
			while(!isempty(q))
			{
				deletequeue(&q,&n);
				printf("%d",n);
			}
			flag = 0;
			break;
		default:
			printf("\n�Ƿ����");
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
}hstring;				//�Ѵ��Ķ���

int strinsert(sstring * s,int pos,sstring t)
{
	//�ڴ�s���±�Ϊpos���ַ���֮ǰ���봮t
	int i;
	if (pos<0 || pos > s->len)
		return 0;
	if(s->len + t.len <= maxlen)			//����󴮳�<=maxlen
	{
		for(i = s->len+t.len; i>=t.len+pos; i--)
			s->ch[i] = s->ch[i-t.len];
		for(i=0; i<t.len; i++)
			s->ch[i+pos] = t.ch[i];
		s->len = s->len + t.len ;
	}
	else if (pos+t.len <= maxlen)				//����󴮳�����maxlen,��t���ַ����п���ȫ������
	{
		for(i = maxlen-1; i>t.len+pos-1; i--)
			s->ch[i] = s->ch[i-t.len];
		for(i=0; i<t.len; i++)
			s->ch[i+pos] = t.ch[i];
		s->len = maxlen;
	}
	else                                        //���봮�󴮳�>maxlen������t�Ĳ����ַ�ҲҪ����
	{
		for(i=0; i<maxlen-pos; i++ )
			s->ch[i+pos] = t.ch[i];
		s->len = maxlen;
	}
	return 1;
}
int strdelete (sstring * s,int pos,int len)				//�ڴ�s��ɾ�����±� pos�� len���ַ�
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
	//��s��t��ȷ���0�����ڷ���������С�ڷ��ظ���
	int i;
	for(i=0; i<s.len && i<t.len; i++)
		if (s.ch[i]!=t.ch[i]) return (s.ch[i]-t.ch[i]);
	return (s.len - t.len);
}
int strindex(sstring s,int pos,sstring t)					//˳�򴮵ļ�ģʽ��λ����
{
	int i,j,start;
	if(t.len == 0) return 0;
	start = pos; i=start; j=0;				//������pos��ʼ��ģʽ����ͷ��ʼ
	while(i<s.len && j<t.len)
		if(s.ch[i] == t.ch[j])
		{i++;j++;}						//�ַ������ʱ�ƽ�
		else
		{
			start++;					//��ǰ�ַ����Ե�ʱ����
			i = start;						//���˴�ͷ����
			j = 0;
		}
		if (j>=t.len ) return start;
		else  return -1;

}
int strinsert (hstring *s,int pos,hstring *t)
{
	//�ڴ�s�±�Ϊpos���ַ�֮ǰ���봮t
	int i;
	char *temp;
	if (pos<0 || pos > s->len || s->len == 0)     return 0;
	temp = (char*)malloc(s->len + t->len);			//��̬�����㹻�Ŀռ��Ų����Ĵ�
	if (temp == NULL) return 0;
	for (i=0; i<pos; i++)    temp[i] = s->ch[i];
	for (i=0; i<t->len; i++)  temp[i+pos] = t->ch[i];
	for (i=pos; i< s->len; i++ )    temp[i+t->len] = s->ch[i];
	s->len = s->len+t->len;
	free(s->ch);
	s->ch = temp;
	return 1;
}
int strassign (hstring * s,char * tval)				//�Ѵ���ֵ����
{
	//���ַ�������tval��ֵ�����Ѵ�s
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
	elementtype e;						//�÷���Ԫ�ص�ֵ
}triple;
typedef struct 
{
	triple data[maxsize+1];				//����Ԫ�ص���Ԫ���data[0]δ��
	int m,n,len;						//������������У��ͷ���Ԫ�صĸ���
}tsmatrix;
void transposetsmatrix (tsmatrix a,tsmatrix *b)
{
	//��aת�õ�b��ָ�ľ����У���������Ԫ����ʾ
	int i,j,k;
	b->m = a.n ; b->n = a.m;  b->len = a.len;
	if (b->len > 0)
	{
		j=1;					//jΪ��������������¼ת�ú����Ԫ������Ԫ���b�е��±�ֵ
		for (k=1; k<=a.n; k++)				//ɨ����Ԫ���a��a.n�Σ�ÿ��Ѱ����ֵΪk����Ԫ�����ת��
			for (i=1; i<=a.len; i++)
				if (a.data[i].col == k)
				{
					b->data[j].row = a.data[i].col;
					b->data[j].col = a.data[i].row;
					b->data[j].e   = a.data[i].e ;
					j++;							//��������1��ָ������һ��ת�ú�Ԫ�ص�λ�� �±�
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

