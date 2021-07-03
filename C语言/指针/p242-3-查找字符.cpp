/*输入一个字符串，从中查找字符'k'
*/
#include <string.h>
#include <stdio.h>
void main()
{
	char *p,a[100];
	int i,n,flag=0;
	printf ("请输入字符串：");
	scanf("%s",a);
	p = a;
	n = strlen(a);
	for (i=0; i<n; i++,p++)
		if (*p == 'k' ){
			flag = 1;
			break;}
	if (flag==1)
		printf ("已找到！\n");
	else
		printf ("没找到！\n");
}