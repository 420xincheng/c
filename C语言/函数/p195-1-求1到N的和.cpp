/*��1 +2 +3 +4 +...+n �ĺͣ���������������n��ֵ*/

#include <stdio.h>
int sum(int n)
{
	int i;
	int sum = 0;
	for (i=1;i<=n;i++)
		sum = sum+i;
	return sum;
}

void main ()
{
	int n;
	printf("������n��ֵ��");
	scanf ("%d",&n);
	printf ("sum=%d\n",sum(n));
}