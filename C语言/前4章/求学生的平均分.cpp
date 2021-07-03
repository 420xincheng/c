#include <stdio.h>
void main()
{
	int c[5],sum;
	double ave;
	printf("请输入第1个学生的分数：");
	scanf("%d",&c[0]);
	printf("请输入第2个学生的分数：");
	scanf("%d",&c[1]);
	printf("请输入第3个学生的分数：");
	scanf("%d",&c[2]);
	printf("请输入第4个学生的分数：");
	scanf("%d",&c[3]);
	printf("请输入第5个学生的分数：");
	scanf("%d",&c[4]);
	sum=c[0]+c[1]+c[2]+c[3]+c[4];
	ave=sum/5.0;
    printf("平均分为：%.2lf\n",ave);
}