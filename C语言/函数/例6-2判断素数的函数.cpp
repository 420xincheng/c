/*��д�����ж�һ�������Ƿ�������������ǣ�����ʾ������������������ʾ��������������
*/

#include <stdio.h>

int isprime(int m)
{
	int i,flag=1;
	for (i=2;i<m;i++)
		if(m%i==0)
		{
			flag=0;
			break;
		}
	return flag;
}
void main ()
{
	int a,flag;
	printf ("������һ������");
	scanf ("%d",&a);
	flag=isprime(a);
	if (flag==1)
		printf ("%d��һ������\n",a);
	else
		printf ("%d����һ������\n",a);
}

������
#include<stdio.h>
int isprime(int val)			//�ж��Ƿ�Ϊ����
{
	int i;
	for (i=2;i<val;i++)
		if(val%i==0)
			break;
	if (val==i)
		return 1;
	else 
		return 0;
}
//�������Ĺ����ǰ�1-n֮�����е���������ʾ���������
void traverseval(int n)
{
	int i;
	for (i=2;i<=n;i++)
		if (isprime(i))
			printf ("%d\n",i);
}

int main ()
{
	int val;
	printf ("������һ��������");
	scanf ("%d",&val);
	printf("1��%d��������У�\n",val);
	traverseval(val);
	return 0;
}