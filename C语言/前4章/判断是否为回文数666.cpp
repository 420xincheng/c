//

#include <stdio.h>
int main (void)
{
	int val;			//val��value����д����Ϊ��ֵ������Ż�������
	int m;
	int sum=0;

	printf ("������һ�����֣�");
	scanf ("%d",&val);
	m=val;

	while (m)
	{
		sum = sum*10 +m%10;			//m%10��ȡ�������ݵ����һλ
		m /=10;						//  while�������ȡval�ĵ����������ֵ��sum
	}

	if (sum==val)
		printf ("Yes!\n");			//�ǻ�����
	else
		printf ("No!\n");
	return 0;
}