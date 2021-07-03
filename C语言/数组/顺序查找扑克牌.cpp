/*假设用0-53来表示54张扑克牌的编号，编程为用户随机产生13张牌，
在随便输入某一张牌的编号，采用顺序查找法查找这张牌是否在用户手中。
*/

#define n 13
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
	int card,i;							//card用于保存随机产生的一张牌
	int cards[n];						//保存用户手上的牌
	int flag[54]={0};					//54张扑克牌的标志位，初值为0，表示没发过
	int aim,pos=-1;						//aim即要查找的牌，pos 所在的位置
	for (i=0;i<n;i++)					//产生13张牌
	{
		card = rand()%54;				//随机产生一张牌（0-53间的随机数）
		while (flag[card]==1)			//若牌已经发过，则重发，直至有效为止
			card = rand()%54;
		flag[card]=1;					//将有效牌的标志位置变为1
		cards[i] = card;				//将有效牌赋给数组

	}
	printf ("用户手中的牌为：");
	for (i=0;i<n;i++)
		printf ("%d ",cards[i]);
	printf ("\n请输入要查找的牌的编号：");
	scanf ("%d",&aim);
	for (i=0;i<n;i++)//
		if (cards[i]==aim)
		{
			pos = i;
			break;
		}
		if (pos!=-1)
			printf ("是第%d张牌\n",pos+1);
		else
			printf ("没找到\n");
}