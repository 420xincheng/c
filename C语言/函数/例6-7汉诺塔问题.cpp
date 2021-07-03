/*汉诺塔：塔中有A,B,C 3个座，A上有64个大小不等的盘子，大的在下，小的在上。
一个小和尚想把64个盘子全部移到C，在移动的过程中，借助A,B,C，但每次只允许移动一个盘子。
并且不允许大盘放在小盘的上面。要求打印出移动的步骤。
idea：将63个盘子看成一个整体，A->B,再将剩下的一个由A->C,finally B->C.
	再依次类推，化简成63个盘子，一直推到一个盘子。
*/

#include <stdio.h>
void main ()
{
	void hanoi(int n,char A,char B,char C);			//函数声明
	int m;
	printf ("请输入盘子的个数：");
	scanf ("%d",&m);
	printf ("%d盘子移动的步骤如下：\n",m);
	hanoi(m,'A','B','C');
}

void hanoi(int n,char A,char B,char C)				//定义递归函数，将n个盘子从A->C,借助B
{
	if (n==1)			//递归终止条件---只有1个盘子，可以直接移动
		printf ("from %c to %c\n",A,C);
	else
	{
		hanoi(n-1,A,C,B);
		printf ("from %c to %c\n",A,C);
		hanoi(n-1,B,A,C);
	}
}