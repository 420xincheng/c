//������ݺ��·ݣ���������ж����졣2020/1/28


#include <stdio.h>
void main ()
{
	int year,month,day;
	printf ("��������ݺ��·ݣ�");
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
			if ((year%4==0 && year%100!=0 )||year%400==0)     		//case2ֻ��if��ߣ����ܽ�case����if������棬case2�����ظ�ʹ��
					day=29;					//�˴�������break����Ȼ��ִ��else���
			else
					day=28;
			break;
	default:printf ("�·��������\n");
	}
	printf ("������%d��\n",day);

}