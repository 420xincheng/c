/* #include <stdio.h>
void main ()
{
	int x,i,flag=1;				//flag为标志变量
	scanf ("%d",&x);
	for (i=2; i<=x-1; i++)
		if (x%i==0)				//若x被 2到（x-1）间的任何数整除，则令flag=0，即不是素数
		{
			flag=0;
			break;
		}
	if (flag)
		printf ("%d是素数\n",x);
	else
		printf ("%d不是素数\n",x);

}	*/


#include <stdio.h>
#include <math.h>
void main ()
{
	int x,i,k,flag=1;
	scanf ("%d",&x);
	k=sqrt((double)x);					//数学上证明只要x不被2~sqrt(x)之间的数整除，就是素数
	for (i=2;i<=k;i++)
		if (x%i==0)
		{
			flag=0;
			break;
		}
		if (flag)
			printf ("%d是素数\n",x);
		else 
			printf("%d不是素数\n",x);
}
