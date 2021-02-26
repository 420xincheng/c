//1.   1到100间奇数的平均值。

#include <stdio.h>
void main ()
{
	int i,sum=0,cnt=0;   //count的缩写
	float ave;		//average的缩写
	for (i=1;i<=100;i++)
		if (i%2==1)
			{
				sum = sum+i;	//求奇数的和
				cnt++;		//求奇数的个数
			}
		ave = 1.0*sum/cnt;
		printf ("1到100间奇数的ave=%.2f",ave);
}


//2.   判断输入的是几位数，且逆序排出。

#include <stdio.h>
void main ()
{
	int  x;
	printf ("请输入一个不超过4位的正整数：");
	scanf ("%d",&x);
	if (x<0 || x>=10000)
		printf ("数据输入不正确！\n");
	else if (x<10)
		printf ("%d为一位数\n",x);
	else if (x<100)
		printf ("%d为两位数，其逆序为%d%d\n",x,x%10,x/10);
	else if (x<1000)
		printf ("%d为三位数，其逆序为%d%d%d\n",x,x%10,x/10%10,x/100);
	else if (x<10000)
		printf ("%d为四位数，其逆序为%d%d%d%d\n",x,x%10,x/10%10,x/100%10,x/1000);
}

//3.   求ASCII码
#include <stdio.h>
void main()
{
	char a,b;
	a=getchar();
	printf("%c的ASCII码是%d\n",a,a);
	b=a+32;
	putchar(b);
}

//4.   break只能终止离它最近的一个循环
#include <stdio.h>
int main ()
{
	int i;
	int j;
	for (i=1; i<3; ++i)
	{
		for (j=1; j<4; ++j)
			break;						//break只能爆破离它最近的for循环
		printf ("同志们好！\n");
	}
	return 0;
}

//5.   编写口令，猜数字，直到正确为止才结束（do...while &while）

#include <stdio.h>
void main ()
{
	int pwd;
	do
	{
		printf ("请输入你心中想的那个数字：");
		scanf ("%d",&pwd);
	}while(pwd!=100);
	printf ("恭喜恭喜！\n");
}

/*
#include <stdio.h>
void main ()
{
	int pwd;			//pwd是password的缩写，密码
	printf ("请输入口令：");
	scanf ("%d",&pwd);
	while (pwd!=100)
	{
		printf ("不正确，请继续猜：");
		scanf ("%d",&pwd);
	}
	printf ("恭喜您！\n");
}*/

//6.   do-while 求一元二次方程的根
#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b,c;
	double x1,x2,delta;
	char ch;

	do
	{
		printf ("请输入三个整数：");
			scanf ("%d %d %d",&a,&b,&c);
				delta = b*b - 4*a*c;
		if (delta>0)
		{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
		printf ("方程的根为 x1=%lf, x2=%lf\n",x1,x2);
		}
		else if (delta==0)								       //等于号是"=="而不是赋值号"="
		{
			x1=x2= (-b)/(2*a);
			printf ("方程的根为 x=%lf\n",x1);
		}
		else
			printf ("该方程无解！\n");
		printf ("您还想继续么（Y/N）：");
		scanf (" %c",&ch);							//%c前面必须要有一个空格，空语句不解释，略略略~
	
	}while(ch=='Y' || ch=='y');
	return 0;
}

//7.   华氏温度转化摄氏温度
#include <stdio.h>
void main()
{
	double c,F;
	printf("请输入华氏温度：");
	scanf("%lf",&F);
	c=5/9*(F-32);
	printf("其摄氏温度为：%7.2lf\n",c);

}

//8.   分段函数（if...else if.......else）
#include <stdio.h>
void main ()
{
	double x,y;
	printf ("请输入x的值：");
	scanf ("%lf",&x);
	if (x>-5 && x<0)
		y = x-1;
	else if (x==0)
		y = x;
	else if (x>0 && x<8)
		y = x+1;
	else 
		y = 10;
	printf ("x=%lf,y=%lf\n",x,y);
}

//9.   判断是否为水仙花数（100到999之间）
#include <stdio.h>
void main ()
{
	int a,b,c,d;
	printf ("请输入一个三位整数：");
	scanf ("%d",&a);
	b=a/100;
	c=a/10%10;
	d=a%10;
	if (a<=999 && a>=100)
		if (a==b*b*b+c*c*c+d*d*d)
			printf ("%d是一个水仙花数\n",a);
		else 
			printf ("%d不是一个水仙花数\n",a);
	else
		printf ("请重新输入一个三位整数。\n");
}

//10.   /*已知银行整存整取存款不同期限的月息利率如下：0.215%（期限为一年）、0.230%（期限为两年）、
  0.245%（期限为三年）、0.275%（期限为五年）、0.320%（期限为八年），
  编程从键盘输入存款的本金和期限，计算到期时从银行得到的金额，保留两位小数。要求用if和switch语句书写。*/

#include <stdio.h>
void main ()
{
	int year,flag=1;														//要有一个真语句作为if语句的判断条件
	double money,rate,total;
	printf ("请输入要存款的本金和年限：");
	scanf ("%lf %d",&money,&year);											//计算利率的时候要转化为小数
	
		switch (year)
	               {
		case 1:rate = 0.00215;    break;
		case 2:rate = 0.00230;    	   break;
		case 3:rate = 0.00245;		break;            //不要少了break
		case 5:rate = 0.00275;   	   break;
		case 8:rate = 0.00320;    break;
		default:printf ("输入期限不正确！\n");flag=0;	     //flag要赋值为0					//要将0赋值给flag，不执行if语句
		}
	if (flag)
	{
		total = money + money*rate*12*year;
		printf ("金额=%.2lf\n",total);										//记得加换行符

	}
}
