
//�������x*x+y*y=1989��������������

#include <stdio.h>
void main ()
{
	int i,j;
	for (i=0;i<50;i++)
		for (j=0;j<50;j++)
			if (i*i+j*j==1989)
				printf ("x=%d y=%d\n",i,j);
}