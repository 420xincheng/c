/*������ָ�����͵�����һ����for example��78987����main�������������1000-9000֮�����еĻ�������ÿ��10��
*/

#include <stdio.h>
void main ()
{
	int ishuiwen (int n);
	int i,j=0;
	for (i=1000;i<=9000;i++)
	{
		if (ishuiwen(i))			//��������
		{
			printf ("%5d",i);
			j++;
			if (j%10==0)
				printf ("\n");
		}
	}

}
int ishuiwen (int n)
{
	int old,newdata=0;
	old  =  n;
	while (old!=0)
	{
		newdata = newdata*10 +old%10;			//ÿ�ν�old�����λȡ��������������
		old /=10;								//ÿ��������������λ
	}
	if (newdata==n)								//old==new
		return 1;
	else 
		return 0;

}