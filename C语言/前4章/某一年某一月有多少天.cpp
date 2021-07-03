//输入年份和月份，输出该月有多少天。2020/1/28


#include <stdio.h>
void main ()
{
	int year,month,day;
	printf ("请输入年份和月份：");
	scanf ("%d%d",&year,&month);
	switch (month)
	{
	case 1:
		case 3:
			case 5:
				case 7:
			case 8:
		case 10:
	case 12:	day=31;		break;
	case 4:
		case 6:
		case 9:
	case 11:	day=30;		break;
	
	case 2:
			if ((year%4==0 && year%100!=0 )||year%400==0)     		//case2只能if外边，不能将case放在if语句里面，case2不能重复使用
					day=29;					//此处不能有break，不然不执行else语句
			else
					day=28;
			break;
	default:printf ("月份输入错误！\n");
	}
	printf ("本月有%d天\n",day);

}