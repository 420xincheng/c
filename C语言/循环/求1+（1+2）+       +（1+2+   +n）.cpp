//��1+��1+2��+��1+2+3��+......+��1+2+3+......+n��֮�ͣ�����n�Ӽ������롣

#include <stdio.h>
void main ()
{
	int n,i,a=0,b;
	int sum=0;
	printf ("������n��ֵ��");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		b = a+i;				//ÿһ���ֵ
		sum = sum+b;			//ÿһ�����                 //������Ƚ϶��ԣ��е���ظ�����
		a = b;					//��a��ֵ����
	}
	printf ("sum=%d\n",sum);
}

//for (i=1;i<=n;i++)
  {
        t=t+i;
        sum=sum+t;
   }