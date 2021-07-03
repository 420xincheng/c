//将字符s2中的全部字符复制到数组s1中，要求不调用strcpy函数

#include <stdio.h>
#include <string.h>
void main ()
{
	char s1[20],s2[20];
	int i;
									//gets (s1);
	gets (s2);
	for (i=0;i<strlen(s2);i++)
		s1[i] = s2[i];
		s1[i] = '\0';
	puts (s1);

	
}