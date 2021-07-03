//输入一个年份，判断是否为闰年。闰年必须符合的两个条件中的一个1.能被4整除，但不能被100整除2.能被400整除。

#include <stdio.h>
void main ()
{
	int a;
	printf ("请输入一个年份：");
	scanf("%d",&a);
	if ((a%4==0 && a%100!=0 )|| a%400==0)
		printf("%d是闰年\n",a);
	else
		printf("%d不是闰年\n",a);
}