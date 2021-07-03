#include <stdio.h>
void main ()
{
	int i,sum=0,max=0,min=100,c[10];
	float ave;
	for (i=0;i<10;i++)
	{
		printf ("请输入第%d个学生的分数：",i+1);
		scanf ("%d",&c[i]);
		sum = sum + c[i];
		if (c[i]>max)
			max = c[i];
		if (c[i]<min)
			min = c[i];
	}
	ave = (float)sum/10;
	printf ("平均分：%f,最高分：%d,最低分：%d\n",ave,max,min); 
}