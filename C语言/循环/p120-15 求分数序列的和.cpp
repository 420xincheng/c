/*��һ��������2/1��3/2,5/3,8/5,...,�ӵ�2�ʼ��ÿһ��ķ���
Ϊǰһ��ķ������ĸ֮�ͣ�ÿһ��ķ�ĸΪǰһ��ķ��ӣ�������е�ǰn��͡�
*/

#include <stdio.h>
void main ()
{
	double a=2,b=1,x,sum=0;
	int i,n;
	printf ("������n��ֵ��");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum = sum + 1.0*a/b;
		x = a;
		a = a+b;
		b = x;
	}
	printf ("sum=%lf\n",sum);
}