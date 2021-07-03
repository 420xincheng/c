
#include <stdio.h>
void main ()
{
	char a[20];
	int i=0;
	gets(a);
	while (a[i])
	{
		if (a[i]>='A'&& a[i]<='Z')
			a[i] = a[i]+32;
		i++;
	}
	printf ("转换结果为：%s\n",a);
}