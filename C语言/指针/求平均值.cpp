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
	printf ("������ѧ��������");
	scanf ("%d",&n);
	printf ("������ѧ���ɼ���");
	for (i=0;i<n;i++)
		scanf ("%f",&x[i]);
	ave = point(x,n);
	printf ("ѧ��ƽ���ɼ�= %.2f\n",ave);
}
