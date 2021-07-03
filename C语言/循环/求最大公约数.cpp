一、最大公约数求法
（1）辗转相除法
设有两整数a和b：
① a%b得余数c
② 若c==0，则b即为两数的最大公约数
③ 若c！=0，则a=b，b=c，再回去执行①。

例如求27和15的最大公约数过程为：
27÷15 余12
15÷12 余3
12÷3 余0
因此，3即为最大公约数。

（2）相减法
设有两整数a和b：
① 若a>b，则a=a-b
② 若a<b，则b=b-a
③ 若a==b，则a（或b）即为两数的最大公约数
④ 若a！=b，则再回去执行①。

例如求27和15的最大公约数过程为：
27－15＝12( 15>12 )
15－12＝3( 12>3 )
12－3＝9( 9>3 )
9－3＝6( 6>3 )
6－3＝3( 3==3 )
因此，3即为最大公约数。



#include <stdio.h>
void main ()
{
	int m,n,i,t;
	
	scanf ("%d%d",&m,&n);
	
	if (m>n)
	{t=m;m=n;n=t;}				//使得m存放最小值
	min=m;
	for (i=m;i>0;i--)
		if (m%i==0 && n%i==0){
			 printf ("%d",i);
			 break;}
}

法二：
#include <stdio.h>
int main ()
{
	int m,n,c;
	scanf ("%d%d",&m,&n);
	while(1)
	{
		c=m%n;			
//当m<n时，次循环会颠倒m,n的值，循环一次后,m的值会比n大，因此不用管m和n的大小。
		if (c==0){
			printf ("最大公约数为：%d\n",n);
			break;}
		else
		{
			m=n;
			n=c;

		}
	}
	return 0;
}

法三：
#include <stdio.h>
int main ()
{
	int a,b;
	scanf ("%d%d",&a,&b);

	while(a!=b)
	{
		if (a>b)
			a=a-b;
	    	else if (a<b)
			b=b-a;
		else
			break;
	}
	printf ("%d是最大公约数\n",a);
	return 0;
}
