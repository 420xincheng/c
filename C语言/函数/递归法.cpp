/*�õݹ鷨��һ������nת�����ַ�����Ȼ����������ʱҪ������ַ�֮���ÿո���������磬����483��Ӧ����ַ�����4 8 3����n��λ����ȷ��������������λ����������

������ʾ
1������Ǹ�����Ҫ����ת��Ϊ������ͬʱ��Ϊ�����һ����-���š�
2��������putchar(n%10+'0')��putchar(n%10+48)�����һ���ַ���
3��������putchar��32�������һ���ո�
*/
/*
#include<stdio.h>
void convert(int n)����
	

{		int i;
		if ((i=n/10)!=0)
			convert(int n);
		putchar(n%10+'0');
}
main()
{
	int number;
	printf("Input an integer:");
	scanf("%d",&number);
	printf("Output:");
	if (number<0)
	{
		putchar('-');
		number=-number;
	}
	conert(number);
}*/
/*
#include <stdio.h>
void trans(int n)
{
	int i;
	if ((i = n/10)!=0)
		trans(n);
	putchar(n%10 + '0');
}
void main ()
{
	int n;
	printf ("������һ������");
	scanf ("%d",&n);
	printf ("output:");
	if (n<0)
	{
		putchar('-');
		n = -n;
	}
	trans(n);
}*/
/*
#include<stdio.h>
 
void convert(int n) {
	int i;
	if (n < 0) {
		printf("- ");
		n = -n;
	}
	if ((i = n / 10) != 0)
		convert(i);
	putchar(n % 10 + '0');
	putchar(32);
}
 
int main() {
	int num;
	scanf("%d", &num);
	
	convert(num);
	printf("\n");
	return 0;
}*/


