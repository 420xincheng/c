
#include <stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	int com(char *,char *);
	printf ("ÇëÊäÈëÁ½¸ö×Ö·û´®£º");
	gets (str1);
	gets (str2);
	
	if (com(str1,str2)>0)
		printf ("str1 > str2\n");
	else if (com(str1,str2)<0)
		printf ("str1 < str2\n");
	else
		printf ("str1 = str2\n");
	return 0;
}
int com(char * p,char * q)
{
	while (*p == *q && *p != '\0')
	{
		p++;
		q++;
	}
	return *p-*q;
}