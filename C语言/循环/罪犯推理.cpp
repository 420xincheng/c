//��4��������С�š�С����С���С�ԡ�С��˵�����Լ���С��˵��С�С��˵��С�ԣ�С��Ҳ˵�����Լ�����ֻ֪��һ��˵�˼ٻ���

#include <stdio.h>
int main ()							//��1��2��3��4�ֱ��ʾС�š�С����С���С��
{
	int cri;
	for (cri=1;cri<5;cri++)
	{
		int count = 0;
		if (cri !=1) count++;
			if (cri ==3) count++;
				if (cri ==4) count++;
			if (cri !=4) count++;
		if (count ==3)
		{
			switch (cri)
			{
			case 1:printf ("С�����ﷸ\n"); break;
			case 2:printf ("С�����ﷸ\n"); break;
			case 3:printf ("С�����ﷸ\n"); break;
			case 4:printf ("С�����ﷸ\n"); break;
			}
			 break;
		}
	}




	return 0;
}