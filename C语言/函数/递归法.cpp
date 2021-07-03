/*用递归法将一个整数n转换成字符串，然后输出，输出时要求各个字符之间用空格隔开。例如，输入483，应输出字符串“4 8 3”。n的位数不确定，可以是任意位数的整数。

解题提示
1）如果是负数，要把它转换为正数，同时人为地输出一个“-”号。
2）可以用putchar(n%10+'0')或putchar(n%10+48)来输出一个字符。
3）可以用putchar（32）来输出一个空格。
*/
/*
#include<stdio.h>
void convert(int n)　　
	

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
	printf ("请输入一个数：");
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


