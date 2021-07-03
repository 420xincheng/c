//输入算数运算式要求输出正确结果。

#include <stdio.h>
void main ()
{
	int a,b;
	char op;
	printf ("请输入算术运算式:");
	scanf ("%d%c%d",&a,&op,&b);
	switch (op)
	{
	case '+':printf ("计算结果为：%d\n",a+b);break;
	case '-':printf ("计算结果为：%d\n",a-b);break;
	case '*':printf ("计算结果为：%d\n",a*b);break;
	case '/':
		if (b == 0)
			printf("输入运算式不正确！\n");
		else
			printf ("计算结果为：%d\n",a/b);break;
	case '%':
		if (b == 0)
			printf ("输入运算式不正确！\n");
		else
			printf ("计算结果为：%d\n",a%b);break;
	default: printf ("输入运算式不正确！\n");
	}
}