//按照学生所得分数将其分为五个等级，写程序让其自动划分为某个等级。例如90~100位A等，其他依次类推,0~59均为E等。

#include <stdio.h>
void main()
{
	float score;
	printf ("请输入学生所得的分数：");
	scanf ("%f",&score);
	if (score>=90)
		printf("A\n");
	else if (score>=80)
		printf("B\n");
	else if (score>=70)
		printf ("C\n");
	else if (score>=60)
		printf ("D\n");
	else if (score>=0)
		printf ("E\n");
	else
		printf ("分数输入不正确！");

}