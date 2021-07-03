/*编写一个函数，用来统计一行字符中单词的个数，单词之间用空格分开。
*/


#include <stdio.h>

void main()
{
	int words(char a[]);
	char a[100],n;
	gets(a);
	printf ("字符串为：");
	puts(a);
	n=words(a);
	printf ("单词共有%d个\n",n);
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
my name is wang,a seior high school student.当执行次语句时，
由于此程序只有在空格时才将flag赋值为1，因此遇到标点符号时，
会自动跳到a，而k的值并不会+1，因此最后结果words=8
*/