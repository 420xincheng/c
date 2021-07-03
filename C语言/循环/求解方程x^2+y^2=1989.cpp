
//输出方程x*x+y*y=1989的所有正整数解

#include <stdio.h>
void main ()
{
	int i,j;
	for (i=0;i<50;i++)
		for (j=0;j<50;j++)
			if (i*i+j*j==1989)
				printf ("x=%d y=%d\n",i,j);
}