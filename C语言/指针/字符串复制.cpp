
#include <stdio.h>
void main ()
{
	void copy(char *,char *);
	char str1[100],str2[100];
	printf ("������һ���ַ���str1��");
	gets (str2);
	copy(str1,str2);
	printf("���ƺ�str2 = ");
	puts(str1);
	copy(str1,"China");
	printf ("�ٴθ��ƺ�");
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