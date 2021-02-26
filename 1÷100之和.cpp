//1.求1 +1/2 +1/3 +1/4 +......+1/100的和
#include <stdio.h>

int main (void)
{
	int i;
	float sum = 0;								//由于1/2为小数，所以sum的值不能用int整型
	for (i=1;i <= 100;++i)						// 1/(++i)不符合语法格式
	{
		sum = sum + 1.0/i;						//sum = sum + (float) (1/i)是不对的  1/i 永远为0，
	}											//或者用sum = sum + 1 / (float)(i)      强制转化
	printf ("sum=%f\n",sum);

	return 0;
}

试数的详细步骤
1 -> i=1    1<=100 成立  sum=sum +1.0/1   ++i      i=2
2 -> i=2     2<=100 成立 sum=sum +1.0/2   ++i      i=3
3 -> i=3     3<=100 成立 sum=sum +1.0/3   ++i      i=4
.................................................................................................
.................................................................................................
//2.小红今年12岁，父亲比他大30岁，求多少年后父亲的年龄是小红的2倍。
#include <stdio.h>
void main ()
{
	int x=12,y=42,m;
	while (y!=2*x)
	{
		x++;
		y++;
	}
	m = x-12;			//经历的年数
	printf ("经过的年数：%d，小红的年龄：%d,父亲的年龄：%d\n",m,x,x+30);

}

//3.while 循环求平均分
#include  <stdio.h>
void main()
{
	int c[5],sum=0,i=1;
	double ave;
	while (i<=5)
	{
		printf("请输入第%d个学生的分数：",i);
		scanf("%d",&c[i-1]);
		sum=sum+c[i-1];
		i=i+1;
	}
	ave=sum/5.0;
	printf("平均分为：%.2lf\n",ave);
}

//4.将成绩与等级（A-E）对应
#include <stdio.h>
void main ()
{
	char score;
	printf ("请输入成绩等级:");
	scanf ("%c",&score);
	if (score=='A'|| score=='a')
		printf ("恭喜恭喜！分数为85分以上\n");
	else if (score=='B' || score=='b')
		printf ("有待提高哦!分数为70~84分\n");
	else if (score=='C' || score=='c')
		printf ("您比较幸运哈~分数为60-69分\n");
	else if (score=='D' || score=='d')
		printf ("还有较大提升空间呢！分数在60以下\n");
	else 
		printf ("没有更低的等级了！自信点儿，孩子。\n");
}

//5.斐波拉契数列 1 2 3 5 8 13 21 34 55 89...
#include <stdio.h>
int main (void)
{
	int i,n;
	int f1=1;
	int f2=2;
	int f3;
	printf("请输入您要求的是斐波那契数列中的第几项：");
	scanf ("%d",&n);
	if (n==1)
		f3=1;
	else if (n==2)
		f3=2;
	else
		for (i=3;i<=n;i++)
		{
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		printf ("这一项为:%d\n",f3);
	return 0;
}

//6.估算pi 的值
#include <stdio.h>
int main ()
{
	int n;
	double sum=0,pi,i;			//i为当前项 ,pi=π
	double s=1;					//只能用double，若用int则第二项以后均为0， 
	for (n=1;n<=100;n++)
	{
		i = s/(2*n-1);			//计算当前项i
		s = -s;					//隔项反号
		sum = sum+i;
	}
	pi = 4 * sum;
	printf ("π=%lf\n",pi);
	return 0;
}

/*   结果为   3.131593     */
  方法二   	(此方法调用了100次pow函数，极大地拖延了运算速度)

#include <stdio.h>
#include <math.h>
int main ()
{
	int n;
	double sum=0,i,pi;
	for (n=1;n<=100;n++)
	{
		i = pow(-1.0,n+1)/(2*n-1);			//i为当前项
		sum = sum + i;
	}
	pi = sum*4;
	printf ("pi=%lf\n",pi);
	return 0;			

}

//7.从键盘输入两个时间（包括时、分、秒），计算两者之间的时间差。假设用户输入的第1个时间早于第2个时间。
//输入：1:30:15 2:50:25输出：时间差是1小时20分钟10秒
#include <stdio.h>
void main ()
{
	
	int h1,m1,s1,h2,m2,s2,h,m,s;
	scanf ("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	if (s2>s1)
	{
		s=s2-s1;
		if (m2>m1){
			m=m2-m1;
			h=h2-h1;}
		else{
			m=m2+60-m1;
			h=h2-h1-1;
		}
	}
	
	else{
		s=s2+60-s1;
		if (m2>m1){
			m=m2-m1-1;
		        h=h2-h1; }
		else{
			m=m2+59-m1;
			h=h2-1-h1;
		}
	    }
	printf ("时间差是%d小时%d分钟%d秒 ",h,m,s);
}

//8.结构体储存信息
#include <stdio.h>
void main()
{
	struct stu_type
	{
        char num[15];
		char name[10];
		int  age;
		int  c;
		int  math;
		int  en;
		int  sum;
		float ave;
	};				//struct也是一个语句，必须加分号
	struct stu_type stu1,stu2;
	printf("请输入第1个学生的学号：");
	scanf("%s",stu1.num);
	printf("请输入第1个学生的名字：");
	scanf("%s",stu1.name);
	printf("请输入第1个学生的年龄：");
	scanf("%d",&stu1.age);
	printf("请输入第1个学生的C语言成绩：");
	scanf("%d",&stu1.c);
	printf("请输入第1个学生的数学成绩：");
	scanf("%d",&stu1.math);
	printf("请输入第1个学生的英语成绩：");
	scanf("%d",&stu1.en);
	stu1.sum=stu1.c+stu1.math+stu1.en;
	stu1.ave=stu1.sum/3.0;
	printf("请输入第2个学生的学号：");
	scanf("%s",stu2.num);
	printf("请输入第2个学生的名字：");
	scanf("%s",stu2.name);
	printf("请输入第2个学生的年龄：");
	scanf("%d",&stu2.age);
	printf("请输入第2个学生的C语言成绩：");
	scanf("%d",&stu2.c);
	printf("请输入第2个学生的数学成绩：");
	scanf("%d",&stu2.math);
	printf("请输入第2个学生的英语成绩：");
	scanf("%d",&stu2.en);
	stu2.sum=stu2.c+stu2.math+stu2.en;
	stu2.ave=stu2.sum/3.0;
	printf("学生学号\t姓名\t年龄\tC语言\t数学\t英语\t总分\t平均分\n");
	printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu1.num,stu1.name,stu1.age,stu1.c ,stu1.math ,stu1.en ,stu1.sum ,stu1.ave );
	printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu2.num,stu2.name,stu2.age,stu2.c ,stu2.math ,stu2.en ,stu2.sum ,stu2.ave );
}//用循环结构明显简便很多

//9.size of 的用法 求所占字节数
#include <stdio.h>
void main()
{
	double s=1.0;
	printf("%3d",sizeof(int));
	printf("%3d",sizeof(short));
    printf("%3d\n",sizeof(s));
}

//10.求两个整数的最大值。
#include <stdio.h>
void main ()
{
	int x,y,max;
	printf("请输入两个整数：");
	scanf("%d%d",&x,&y);
	max=x;
	if (max<y)
		max=y;
	printf("最大值为：%d\n",max);

}
