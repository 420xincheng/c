//��������60�����ݣ�Ů��55�����ݣ�����һ���˵�������Ա��ж����Ƿ����ݲ��������������Ա�ʱ����F����f��ʾŮ�ԣ���M����m��ʾ���ԣ���������Ա���ȷ��ʱ�򣬸���������ʾ��

#include <stdio.h>
void main ()
{
	char sex;
	int age;
	printf ("�������Ա�����䣺");
	scanf ("%c%d",&sex,&age);
	if (sex == 'm'||sex=='M')
	{
		if (age>=60)
			printf("���Ѿ�����\n");
		else 
			printf ("���ڹ���\n");
	}

	else if (sex=='f'||sex=='F')
	{	if (age>=55)
			printf ("���Ѿ�����\n");
	    else
			printf ("�����ڹ���\n");
	}
	else
		printf("������Ա���ȷ��\n");
}