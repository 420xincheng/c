/*从键盘输入M,求[1，M]范围内能被7或11整除，但不能同时被7和11整除的整数。按每行8个数，每个数占5个字符且以左对齐的格式进行输出。
说明：左对齐输出时，附加格式说明符用“-”。*/

#include <stdio.h>
void main ()
{
	int M,i,j=0;
	scanf ("%d",&M);
	for (i=1;i<=M;i++)
	{
		if ((i%7==0 &&i%11!=0 )||(i%11==0 && i%7!=0) )
			
			{
				printf ("%-5d",i);
				j++;	
				if(j%8==0)
					{
						printf("\n");		//只能放在第一个if的循环里面，不然会输出很多空格
					}
			}
	
	}
	
}


/*当if（j%8==0）放在第一个if外面时，j的值没有自增，因此会输出多余的空行，
即当遇到第一个符合条件的j的值时，由于j没有随之自增，所以会输出多余的空格。
*/


