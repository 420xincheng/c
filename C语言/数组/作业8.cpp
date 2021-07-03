/*从键盘输入一个字符串，用选择法对该字符串中的字符由小到大进行排序，并输出结果。
*/
#include <string.h>
#include <stdio.h>
void main()
{
	char x[100];
	int n,i,j,t,min;
	gets(x);
	n=strlen(x);
	for (i=0;i<n-1;i++)
	{
		min = i;
		for (j=i+1;j<n;j++)
			if (x[min]>x[j])
				min = j;
		if (i!=min)
		{
			t  = x[i];
			x[i] = x[min];
			x[min] = t;
		}
	}
	for (i=0;i<n;i++)
		printf ("%c ",x[i]);
}