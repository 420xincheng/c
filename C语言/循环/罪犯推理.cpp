//有4名嫌疑人小张、小王、小李和小赵。小张说不是自己，小王说是小李，小李说是小赵，小赵也说不是自己。已知只有一人说了假话。

#include <stdio.h>
int main ()							//用1、2、3、4分别表示小张、小王、小李和小赵
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
			case 1:printf ("小张是罪犯\n"); break;
			case 2:printf ("小王是罪犯\n"); break;
			case 3:printf ("小李是罪犯\n"); break;
			case 4:printf ("小赵是罪犯\n"); break;
			}
			 break;
		}
	}




	return 0;
}