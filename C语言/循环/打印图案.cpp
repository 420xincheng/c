/*
打印以下图案：
    *
	**
	***
	****
	*****

*/

#include <stdio.h>
void main ()
{
	int i,j;
	for (i=0;i<5;i++)			//控制行数
	{
		for (j=0;j<=i;j++)		//控制每行的个数
			printf ("*");
		printf ("\n");			//控制换行
	}
}