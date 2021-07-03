
#include <stdio.h>
void main ()
{
	char a[20],b[20];
	int i=0,j=0;
	gets(a);
	while (a[i])
	{
		if (a[i]>='A' && a[i]<='Z')
		{
			b[j] = a[i];
			j++;
		}
		i++;
	}
	b[j] = '\0';
	puts(b);
}