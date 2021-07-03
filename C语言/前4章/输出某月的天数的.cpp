//已知1998年的1、3、5、7、8、10、12月有31天，4、6、9、11月有30天，2月有28天。输入1998年的某个月份、输入该月有多少天。

#include <stdio.h>
void main ()
{
	int  month,day;
	printf ("请输入月份(1-12)：");
	scanf ("%d",&month);
	switch (month)
	{
		case 4:
		case 6:
		case 9:
		case 11:day=30;break;
		case 2:day=28;break;
		default: day = 31;break;
	}
	printf ("%d月的天数为%d\n",month,day);
}