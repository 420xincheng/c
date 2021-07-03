
#include <stdio.h>
void main ()
{
	void copy(char *,char *);
	char str1[100],str2[100];
	printf ("请输入一个字符串str1：");
	gets (str2);
	copy(str1,str2);
	printf("复制后str2 = ");
	puts(str1);
	copy(str1,"China");
	printf ("再次复制后：");
	puts (str1);
}

void copy(char * p,char * q)
{
	while (*q != '\0')			//*q == str2
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
}