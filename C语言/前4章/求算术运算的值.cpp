//������������ʽҪ�������ȷ�����

#include <stdio.h>
void main ()
{
	int a,b;
	char op;
	printf ("��������������ʽ:");
	scanf ("%d%c%d",&a,&op,&b);
	switch (op)
	{
	case '+':printf ("������Ϊ��%d\n",a+b);break;
	case '-':printf ("������Ϊ��%d\n",a-b);break;
	case '*':printf ("������Ϊ��%d\n",a*b);break;
	case '/':
		if (b == 0)
			printf("��������ʽ����ȷ��\n");
		else
			printf ("������Ϊ��%d\n",a/b);break;
	case '%':
		if (b == 0)
			printf ("��������ʽ����ȷ��\n");
		else
			printf ("������Ϊ��%d\n",a%b);break;
	default: printf ("��������ʽ����ȷ��\n");
	}
}