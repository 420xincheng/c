/*输入一个字符和一个字符串 a（长度不超过 100），将字符插入到 a串中最小字符的后面。
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


//可以直接在str函数中输出所求的数组。就不需要用指针。
//可以定义两个数组，函数为void，然后在main函数中输出。
/*
#include <stdio.h>
#include <string.h>
void main ()
{
	char a;
	char x[100]={};
	int i,min=0,n;

	printf ("请输入一个字符：");
	scanf("%c",&a);
	printf ("请输入字符串：");
	scanf("%s",x);			//不用gets是因为输入上一个字符的时候用了回车，导致gets和puts直接结束
	n=strlen(x);
	for (i=0;i<n;i++)
		if (x[min]>x[i])
			min=i;
	for (i=n;i>min;--i)
		x[i]=x[i-1];
	x[min+1]=a;
	x[n+1]='\0';
	printf ("转换后的字符串为：");
	puts(x);
}*/