/* 将字符串中的每个字符ASCII码加100
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
	printf ("密文为：%s\n",a);

}