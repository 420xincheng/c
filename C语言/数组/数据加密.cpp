/* ���ַ����е�ÿ���ַ�ASCII���100
*/

#include <stdio.h>
void  main ()
{
	char a[50];
	int i=0;
	gets(a);
	while (a[i])
	{
		a[i] = a[i]+100;
		i++;
	}
	printf ("����Ϊ��%s\n",a);

}