/*从键盘输入一个字符串，找出其中ASCII码值最小的字符，并输出该字符。
*/

#include <stdio.h>
#include <string.h>
void main ()
{
	char a[100],min;
	int i,n;
	gets(a);
	n = strlen(a);
	min = a[0];
	for (i=0;i<n;i++)
		if (min > a[i])
			min=a[i];
	
	printf ("%c",min);
}