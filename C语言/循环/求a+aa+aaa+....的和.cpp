//键盘输入正整数a和n，编程 s=a+aa+aaa+aaaa+aa...a（n个a）的值。 例如： a=2 ，n=5时,表示计算由2组成的数的和：2+22+222+2222+22222 ( 此时 共有5个数相加)。


#include <stdio.h>
void main ()
{
	int a,n,i;
	int x1=0,x2,sum=0;          //x1,x2用于表示相邻两项
	printf ("请输入正整数a和n的值：");
	scanf ("%d%d",&a,&n);
	for (i=1;i<=n;i++)
	{
		x2 = x1*10 + a;			//计算下一项的值
		sum = sum + x2;			//x1即初始化的第一项
		x1 = x2;				//把当前计算好的项赋给x1
	
	 }
	printf ("%d\n",sum);
}