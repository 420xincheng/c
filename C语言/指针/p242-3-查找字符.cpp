/*����һ���ַ��������в����ַ�'k'
*/
#include <string.h>
#include <stdio.h>
void main()
{
	char *p,a[100];
	int i,n,flag=0;
	printf ("�������ַ�����");
	scanf("%s",a);
	p = a;
	n = strlen(a);
	for (i=0; i<n; i++,p++)
		if (*p == 'k' ){
			flag = 1;
			break;}
	if (flag==1)
		printf ("���ҵ���\n");
	else
		printf ("û�ҵ���\n");
}