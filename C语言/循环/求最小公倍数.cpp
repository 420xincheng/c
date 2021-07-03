最小公倍数=两整数的乘积÷最大公约数

#include <stdio.h>
int main()
{
    int m,n,max,min,b,c;
	printf("请输入两个整数：\n");
	scanf("%d%d",&m,&n);
    c=m%n;
    b=m*n;
	while(c!=0)
	{
        		m=n;
		n=c;
      		c=m%n;
	}
    max=n;
	min=b/max;
	printf("\n最大公约数为：%d\n最小公倍数为：%d\n",max,min);
    return 0;
}




#include <stdio.h>
void main ()
{
	int m,n;
	int k,t;
	printf ("请输入两个正整数：");
	scanf ("%d%d",&m,&n);
	if (m<n)						//m存放较大数，n存放较小数
	{
		t = m;
		m = n;
		n = t;
	}
	k = m;							//k是m的1倍
	while (k%n!=0)
	{
		k = k+m;					//每次增加一倍，当能够被n整除时，k即为最小公倍数
	}
	printf ("最小公倍数k=%d\n",k);		//最小公倍数一定是m和n的整数倍
}


法二：

//最小公倍数肯定是m和n的整数倍，先设变量k=m,当k不能够被m或者n整除时，k+1，直至能够被整除为止。

#include <stdio.h>
void main ()
{
	int m,n,x;
	
	printf ("请输入两个正整数：");
	scanf ("%d %d",&m,&n);
	x=m;
	while (x%m!=0 || x%n!=0)
		x++;
	printf ("最小公倍数为%d\n",x);
}


法三：
#include <stdio.h>
void main ()
{
int m,n,k;
printf ("请输入两个正整数：");
scanf ("%d%d",&m,&n);
k=m;
while (1)
{
	if (k%m==0 && k%n==0)
		break;
	k++;
}
       printf ("最小公倍数为%d",k);
}



 