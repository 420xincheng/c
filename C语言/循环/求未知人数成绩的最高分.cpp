//输入若干个成绩（学生人数未知），输入负数时表示输入结束，求所有成绩的最高分。

#include <stdio.h>
void main ()
{
	int num;
	int i=1,max=0;
	do
	{
		printf ("请输入第%d个学生的成绩：",i);
		scanf ("%d",&num);
		if (num>max)
			max = num;
		i++;
	}while (num>=0);
	printf ("最高分为%d\n",max);
}
