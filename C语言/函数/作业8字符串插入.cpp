/*����һ���ַ���һ���ַ��� a�����Ȳ����� 100�������ַ����뵽 a������С�ַ��ĺ��档
*/

#include <stdio.h>
#include <string.h>
char *str(char a,char *x)
{
	int i,min,n;
	
	n=strlen(x);
	min=0;
	for (i=1;i<n;i++)
		if (x[min]>x[i])
			min=i;
	for (i=n;i>min;--i)
		x[i]=x[i-1];
	x[min+1]=a;
	x[n+1]='\0';
	return x;

}
void main ()
{
	char a,b[100]={};	
	scanf ("%c",&a);
	scanf("%s",b);
	
	printf ("%s",str(a,b));
}


//����ֱ����str�����������������顣�Ͳ���Ҫ��ָ�롣
//���Զ����������飬����Ϊvoid��Ȼ����main�����������
/*
#include <stdio.h>
#include <string.h>
void main ()
{
	char a;
	char x[100]={};
	int i,min=0,n;

	printf ("������һ���ַ���");
	scanf("%c",&a);
	printf ("�������ַ�����");
	scanf("%s",x);			//����gets����Ϊ������һ���ַ���ʱ�����˻س�������gets��putsֱ�ӽ���
	n=strlen(x);
	for (i=0;i<n;i++)
		if (x[min]>x[i])
			min=i;
	for (i=n;i>min;--i)
		x[i]=x[i-1];
	x[min+1]=a;
	x[n+1]='\0';
	printf ("ת������ַ���Ϊ��");
	puts(x);
}*/