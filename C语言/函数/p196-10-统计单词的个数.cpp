/*��дһ������������ͳ��һ���ַ��е��ʵĸ���������֮���ÿո�ֿ���
*/


#include <stdio.h>

void main()
{
	int words(char a[]);
	char a[100],n;
	gets(a);
	printf ("�ַ���Ϊ��");
	puts(a);
	n=words(a);
	printf ("���ʹ���%d��\n",n);
}
int words (char a[])
{
	int k=0,i,flag=1;
	
	for (i=0;a[i]!='\0';i++)
	{
		if ( a[i]==' ')
			flag=1;
		else if (flag==1){
			k++;
			flag=0;
		}
	}
	return k;
}
/*
my name is wang,a seior high school student.��ִ�д����ʱ��
���ڴ˳���ֻ���ڿո�ʱ�Ž�flag��ֵΪ1���������������ʱ��
���Զ�����a����k��ֵ������+1����������words=8
*/