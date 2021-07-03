//

#define n 13
#include <stdio.h>
void main ()
{
	int cards[n]={16,17,18,22,25,28,31,36,41,43,48,51,53};//
	int aim,pos=-1;//
	int low=0,high=n-1;
	printf ("请输入要查找的牌的编号：");
	scanf ("%d",&aim);
	while(low<=high)
	{
		int middle=(low+high)/2;
		if (cards[middle]==aim)
		{
			pos = middle;
			break;
		}
		else if (cards[middle]>aim)
			high = middle-1;
		else 
			low = middle+1;
	}
	if (pos!=-1)
		printf ("是第%d张牌\n",pos+1);
	else
		printf ("没找到\n");
}