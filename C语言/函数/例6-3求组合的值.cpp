/*求  x = m!/(n!*(m-n)!)
idea:编写一个函数求n!的值，该函数需要一个参数，返回值类型为整型
*/
#include <stdio.h>
int fac(int k)					//求n!
{
	int i,f=1;
	for (i=1;i<=k;i++)
		f = f*i;
	return f;
}
int comb(int m,int n)			//求组合
{
	int c;
	c = fac(m)/(fac(n)*fac(m-n));
	return c;
}
void main ()
{
	int m,n,c;
	printf ("请输入m和n的值（m>n）:");
	scanf ("%d %d",&m,&n);
	c=comb(m,n);
	printf ("c=%d\n",c);

}




/*
#include <stdio.h>
void main ()
{
	int fac(int k);
	int m,n,c;
	printf ("请输入m和n的值(m>n):");
	scanf ("%d %d",&m,&n);
	c = fac(m)/(fac(n)*fac(m-n));
	printf ("c=%d\n",c);
}

int fac(int k)
{
	int i,f=1;
	for (i=1;i<=k;i++)
		f = f*i;
	return f;
}
*/