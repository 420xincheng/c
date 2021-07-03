/*��ŵ����������A,B,C 3������A����64����С���ȵ����ӣ�������£�С�����ϡ�
һ��С�������64������ȫ���Ƶ�C�����ƶ��Ĺ����У�����A,B,C����ÿ��ֻ�����ƶ�һ�����ӡ�
���Ҳ�������̷���С�̵����档Ҫ���ӡ���ƶ��Ĳ��衣
idea����63�����ӿ���һ�����壬A->B,�ٽ�ʣ�µ�һ����A->C,finally B->C.
	���������ƣ������63�����ӣ�һֱ�Ƶ�һ�����ӡ�
*/

#include <stdio.h>
void main ()
{
	void hanoi(int n,char A,char B,char C);			//��������
	int m;
	printf ("���������ӵĸ�����");
	scanf ("%d",&m);
	printf ("%d�����ƶ��Ĳ������£�\n",m);
	hanoi(m,'A','B','C');
}

void hanoi(int n,char A,char B,char C)				//����ݹ麯������n�����Ӵ�A->C,����B
{
	if (n==1)			//�ݹ���ֹ����---ֻ��1�����ӣ�����ֱ���ƶ�
		printf ("from %c to %c\n",A,C);
	else
	{
		hanoi(n-1,A,C,B);
		printf ("from %c to %c\n",A,C);
		hanoi(n-1,B,A,C);
	}
}