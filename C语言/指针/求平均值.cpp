#include <stdio.h>
float point(float * a,int n)
{
	float sum=0;
	float ave;
	int i;
	for (i=0;i<n;i++)
		sum = sum + a[i];
	ave = sum/n;
	return ave;

}
void main ()
{
	float x[100],ave;
	int i,n;
	printf ("请输入学生人数：");
	scanf ("%d",&n);
	printf ("请输入学生成绩：");
	for (i=0;i<n;i++)
		scanf ("%f",&x[i]);
	ave = point(x,n);
	printf ("学生平均成绩= %.2f\n",ave);
}
