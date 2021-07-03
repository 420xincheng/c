/*回文是指正读和倒读都一样，for example：78987，在main（）函数中输出1000-9000之间所有的回文数，每行10个
*/

#include <stdio.h>
void main ()
{
	int ishuiwen (int n);
	int i,j=0;
	for (i=1000;i<=9000;i++)
	{
		if (ishuiwen(i))			//函数调用
		{
			printf ("%5d",i);
			j++;
			if (j%10==0)
				printf ("\n");
		}
	}

}
int ishuiwen (int n)
{
	int old,newdata=0;
	old  =  n;
	while (old!=0)
	{
		newdata = newdata*10 +old%10;			//每次将old的最低位取出，加入新数中
		old /=10;								//每次舍掉旧数的最低位
	}
	if (newdata==n)								//old==new
		return 1;
	else 
		return 0;

}