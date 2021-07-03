/*假设有36块砖，由36人搬，Superman一次搬4块，superwoman一次搬3块，2个小屁孩抬一块，
要求依次刚好全部搬完。问Superman，superwoman，小屁孩的人数各为多少？*/

#include <stdio.h>
void main ()
{
	int man,f,child;			//分别表示男、女、小孩
	
	for (man=1;man<9;man++)
		for (f=1;f<12;f++)
		{
			child = 36-man-f;
			if (child%2!=0)
				continue;											//此处应该用continue（直接进入下一次循环），而不是用break，若用break，则会跳出离它最近的for循环
					if (4*man+3*f+child/2==36)
						printf ("supermen=%d superwomen=%d child=%d\n",man,f,child);

		}
}



//上述还可编写为
//if ((4*man+3*f+child/2==36) && (child%2==0))