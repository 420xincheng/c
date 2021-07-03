//求1+（1+2）+（1+2+3）+......+（1+2+3+......+n）之和，其中n从键盘输入。

#include <stdio.h>
void main ()
{
	int n,i,a=0,b;
	int sum=0;
	printf ("请输入n的值：");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		b = a+i;				//每一项的值
		sum = sum+b;			//每一项求和                 //好像相比较而言，有点儿重复啰嗦
		a = b;					//把a的值更新
	}
	printf ("sum=%d\n",sum);
}

//for (i=1;i<=n;i++)
  {
        t=t+i;
        sum=sum+t;
   }