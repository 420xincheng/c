//����������n,��1��+2��+3��+...+n!֮�͡�

#include <stdio.h>
int main ()
{
	int i,j,n; 
	int sum=0,p;							//p����׳�
	printf ("������������n��ֵ��");
	scanf ("%d",&n);

	for (i=1;i<=n;i++)
	{
		p=1;
		for (j=1;j<=i;j++)				//�����i�����Ľ׳ˣ���i!
			p = p*j;
		sum = sum + p;					//���׳��ۼ�

	}
	printf ("sum=%d\n",sum);

	return 0;
}


//��������������


#include <stdio.h>
int main ()
{
	int i,n;
	int p=1,sum=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
		{
		     p = p*i;		//��i!
		     sum = sum +p;  		//��i!����sum��
		}
	printf ("sum=%d",sum);
	return 0;
}