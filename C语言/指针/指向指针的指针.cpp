#include <stdio.h>
int main ()
{
	int i = 10;
	int *p = &i;
	int **pp = &p;
	printf ("pp = %d,&p = %d\n",pp,&p);
	printf ("*pp = %d, p = %d, &i=%d\n",*pp,p,&i);
	printf ("**pp = %d,*p = %d,i = %d\n",**pp,*p,i);
	return 0;
}

