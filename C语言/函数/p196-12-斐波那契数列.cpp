/*��дһ����Fibonacci����ĳһ��ĵݹ麯������������������n�������Զ��庯����
���쳲��������е�ǰn�example��0,1��1��2,3,5,8,13��...��n
*/
#include <stdio.h>
void main ()
{
    int fibo(int k);
	int n;
	int i;
	printf ("������n��ֵ��");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		printf ("%d ",fibo(i));
	if(i%10==0)
		printf ("\n");}
}
int fibo(int k)				//�ݹ�
{
	int f;
	if (k==1)
		f=0;
	else if (k==2)
		f=1;
	else
		f=fibo(k-1)+fibo(k-2);
	return f;
}
/*
void main ()
{
    void fibo(int k);
	int n;
	
	printf ("������n��ֵ��");
	scanf ("%d",&n);
	fibo(n);
}
void fibo(int x)
{
	int a1=0,a2=1;
	int k,i;
	int m=0;
	printf ("%d %d ",a1,a2);
	for (i=3;i<=x;i++)
	{
		k = a1+a2;
		printf ("%d ",k);
		m++;
		if (m%10==0)
			printf ("\n");
		a1=a2;
		a2=k;
	}
}
*/
//��n��ֵΪ100ʱ���������бȽ������������õݹ�ʱ�����������100���������д���