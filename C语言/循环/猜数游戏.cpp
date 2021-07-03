//有一个4位数，满足一下条件，1.前两位数字相同；2.后两位数字也相同 3.这个4位数恰好是某个整数的平方。这个数是？

#include <stdio.h>
int main ()
{
	int a,b,n,i;
	for (a=1;a<10;a++)
		for (b=0;b<10;b++)
		{
			n = a*1000+a*100+b*10+b;
			for (i=1;i<101;i++)
				if (n==i*i)
					printf ("该数为：%d,是%d的平方\n",n,i);
		}
	
	
	
	return 0;
}