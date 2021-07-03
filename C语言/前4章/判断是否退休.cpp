//假设男性60岁退休，女性55岁退休，输入一个人的年龄和性别，判断它是否退休并输出结果。输入性别时，用F或者f表示女性，用M或者m表示男性，当输入的性别不正确的时候，给出错误提示。

#include <stdio.h>
void main ()
{
	char sex;
	int age;
	printf ("请输入性别和年龄：");
	scanf ("%c%d",&sex,&age);
	if (sex == 'm'||sex=='M')
	{
		if (age>=60)
			printf("他已经退休\n");
		else 
			printf ("他在工作\n");
	}

	else if (sex=='f'||sex=='F')
	{	if (age>=55)
			printf ("她已经退休\n");
	    else
			printf ("她还在工作\n");
	}
	else
		printf("输入的性别不正确！\n");
}