//将1-1000中所有12的倍数存放到一个一维数组中，并输出数组。

#include <stdio.h>
void main ()
{
	int i,a[100],j=0;					//j用于计数
		for (i=1;i<=1000;i++)
		{
			if (i%12==0)
			{
				a[j]=i;
				j++;
			}
		}
		for (i=0;i<j;i++)
		{
			if (i%10==0)
				printf ("\n");
			printf ("%-5d",a[i]);
		}
}