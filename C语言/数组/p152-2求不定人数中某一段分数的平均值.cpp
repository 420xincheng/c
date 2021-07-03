//从键盘输入若干个学生的成绩，输入负数时表示输入结束，输出平均成绩和低于平均分学生的成绩。

#include <stdio.h>
void main ()
{
	int i ,k=0;
	float sum=0,ave,x[100];
	for (i=0;i<100;i++)
	{
		printf ("请输入第%d个学生的成绩：",i+1);
		scanf ("%f",&x[i]);
		if (x[i]<0)
			break;
		else {
			sum = sum +x[i];
			k++;
		}
	}
	ave = sum/k;
	printf ("平均成绩为：%.2f\n",ave);
	printf ("低于平均分学生的成绩为：\n");
	for (i=0;i<k;i++)						//注意是i<k,而不是<100，
	{
		if (x[i]<ave)
			printf ("%f\t",x[i]);
	
	}

}