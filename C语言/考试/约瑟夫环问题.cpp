/*
约瑟夫环问题的具体描述是：设有编号为1,2,3,..,n的n个(n>0)个人围成一个圈，
从第1个人开始报数，报到m时停止报数，报m的人出圈，才从他的下一个人起重新
报数，报到m时停止报数，报m的出圈，……，如此下去，直到所有人都出列。当
任意给定n和m后，设计算法求n个人出圈的次序。
*/
/*
#include <stdio.h>
int main()
{
	int n,m,i,s=0;

	printf("input N,M = ");

	scanf("%d%d",&n,&m);

	for (i = 2; i <= n; i++)
	{
		s = (s + m)%i;
	}

	printf("\nThe winner is %d\n",s+1);

	return 0;
}
*/
/*为了讨论方便，先把问题稍微改变一下，并不影响原意：
问题描述：n个人（编号0~(n-1))，从0开始报数，报到(m-1)的退出，剩下的人继续从0开始报数。求胜利者的编号。

我们知道第一个人(编号一定是m%n-1) 出列之后，剩下的n-1个人组成了一个新的约瑟夫环（以编号为k=m%n的人开始）:
  k  k+1  k+2  ... n-2, n-1, 0, 1, 2, ... k-2并且从k开始报0。
现在我们把他们的编号做一下转换：

k     --> 0
k+1   --> 1
k+2   --> 2
...
...
k-2   --> n-2
k-1   --> n-1
变换后就完完全全成为了(n-1)个人报数的子问题，假如我们知道这个子问题的解：例如x是最终的胜利者，那么根据上面这个表把这个x变回去不刚好就是n个人情况的解吗？！！变回去的公式很简单，相信大家都可以推出来：x'=(x+k)%n

如何知道(n-1)个人报数的问题的解？对，只要知道(n-2)个人的解就行了。(n-2)个人的解呢？当然是先求(n-3)的情况 ---- 这显然就是一个倒推问题！好了，思路出来了，下面写递推公式：

令f[i]表示i个人玩游戏报m退出最后胜利者的编号，最后的结果自然是f[n]

递推公式
f[1]=0;
f[i]=(f[i-1]+m)%i;  (i>1)

有了这个公式，我们要做的就是从1-n顺序算出f[i]的数值，最后结果是f[n]。因为实际生活中编号总是从1开始，我们输出f[n]+1
由于是逐级递推，不需要保存每个f[i]
链接：https://www.cnblogs.com/EricYang/archive/2009/09/04/1560478.html
*/


//链表
/*
 1 
  2  约瑟夫环问题(Josephus)
  3  用户输入M,N值，从1至N开始顺序循环数数，每数到M输出该数值，直至全部输出。写出C程序。（约瑟夫环问题 Josephus）
  4  Code By Eric Yang 2009
  5  http://ericyang.cnblogs.com
  6
  7 #include <stdio.h>
  8 #include <stdlib.h>
  9 
 10 // 链表节点
 11 typedef struct _RingNode
 12 {
 13     int pos;  // 位置
 14     struct _RingNode *next;
 15 }RingNode, *RingNodePtr;
 16 
 17 // 创建约瑟夫环，pHead:链表头指针，count:链表元素个数
 18 void CreateRing(RingNodePtr pHead, int count)
 19 {
 20     RingNodePtr pCurr = NULL, pPrev = NULL;
 21     int i = 1;
 22     pPrev = pHead;
 23     while(--count > 0)
 24     {
 25         pCurr = (RingNodePtr)malloc(sizeof(RingNode));
 26         i++;
 27         pCurr->pos = i;
 28         pPrev->next = pCurr;
 29         pPrev = pCurr;
 30     }
 31     pCurr->next = pHead;  // 构成环状链表
 32 }
 33 
 34 void PrintRing(RingNodePtr pHead)
 35 {
 36     RingNodePtr pCurr;
 37     printf("%d", pHead->pos);
 38     pCurr = pHead->next;
 39     while(pCurr != NULL)
 40     {
 41         if(pCurr->pos == 1)
 42             break;
 43         printf("\n%d", pCurr->pos);
 44         pCurr = pCurr->next;
 45     }
 46 }
 47 
 48 void KickFromRing(RingNodePtr pHead, int m)
 49 {
 50     RingNodePtr pCurr, pPrev;
 51     int i = 1;    // 计数
 52     pCurr = pPrev = pHead;
 53     while(pCurr != NULL)
 54     {
 55         if (i == m)
 56         {
 57             // 踢出环
 58             printf("\n%d", pCurr->pos);    // 显示出圈循序
 59             pPrev->next = pCurr->next;
 60             free(pCurr);
 61             pCurr = pPrev->next;
 62             i = 1;
 63         }
 64         pPrev = pCurr;
 65         pCurr = pCurr->next;
 66         if (pPrev == pCurr)
 67         {
 68             // 最后一个
 69             printf("\n%d", pCurr->pos);    // 显示出圈循序
 70             free(pCurr);
 71             break;
 72         }
 73         i++;
 74     }
 75 }
 76 
 77 int main()
 78 {
 79     int m = 0, n = 0;
 80     RingNodePtr pHead = NULL;
 81     printf("---------------Josephus Ring---------------\n");
 82     printf("N(person count) = ");
 83     scanf("%d", &n);
 84     printf("M(out number) = ");
 85     scanf("%d", &m);
 86     if(n <= 0 || m <= 0)
 87     {
 88         printf("Input Error\n");
 89         system("pause");
 90         return 0;
 91     }
 92     // 建立链表
 93     pHead = (RingNodePtr)malloc(sizeof(RingNode));
 94     pHead->pos = 1;
 95     pHead->next = NULL;
 96     CreateRing(pHead, n);
 97 #ifdef _DEBUG
 98     PrintRing(pHead);
 99 #endif
100 
101     // 开始出圈
102     printf("\nKick Order: ");
103     KickFromRing(pHead, m);    
104     printf("\n");
105     system("pause");
106     return 0;
107 }
108 
*/

/*
报到T的人出圈，怎么表示出圈？要么删除对应的标号，其他的标号前移
（如果是数组结构，要依次移动元素，效率低；如果是链表，删除结点也比较麻烦）；
要么设定状态标志位（声明一个状态数组status[N]，status[i] ==0时表示未出圈，
出圈时将对应第i号人的status置为出圈的次数；即status[i]=count）

解决了表示出圈的问题，那如何出圈？如果报数T大于总人数N时，
 数组越界问题--->(索引 % 链表长度 进行取余操作)
需要取余才能将报号的范围限制在标号为0~N-1中。

流程呢？

while（出圈人数<总人数)

{
        从start下标依次查找status为0的下标（需要保存start下标）

                     计数

                判断计数是否等于T

              若计数等于T

                         出圈，更新对应下标的status，出圈人数加1

}

void joseph()
{
	int T,N;
	scanf("%d%d",&T,&N);
	//T为出列周期，N为N个人，即环的元素个数
	int status[1000];
	memset(status,0,sizeof(status));
	int start,end;
	start = -1;
	int count = 0;
	
	while(count<N)
	{
		int i=0;
		while(1)
		{
			
			start = (start+1) % N;
			if(status[start] == 0)
			{
				i++;
			}
			if(i == T)
			{
				
				++count;
				status[start]=count;
				
				break;
			}
		}
		
	}
	
	for(int k=0;k<N;k++)
		printf("%d",status[k]);
	
}

————————————————
版权声明：本文为CSDN博主「keepupblw」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/keepupblw/article/details/37610767

*/


#include<stdio.h>
int main()
{
	int m,n,i,j,k=0,a[100]={0};
	scanf("%d%d",&n,&m);
	if(n>=1&&m<=1000000)
	{
	   for(i=0;i<n;i++)
	   {
		a[i]=i+1;
	   }
    	while(n>1)
		{
		   i=(i+m-1)%n;				//待删除的项的下标，+（m-1）是从删除的元素后又从一开始报数，隔了m-1个，取余是使人数成环
		   k++;
		   for(j=i+1;j<n;j++)
		   {
			a[j-1]=a[j];
		   }
		   n--;
		   if(i==n)
		   {
			i=0;
		   }
		}
	}
	printf("%d\n",a[i]);
	return 0;
}
/*
————————————————

原文链接：https://blog.csdn.net/qq_44075791/article/details/85540053
*/