/*从键盘输入一个字符串，分别用冒泡法和选择法对该字符串中的字符由小到大进行排序，并输出结果。
*/
/*
#include <stdio.h>
#include <string.h>
void main ()
{
	int i,j,n;
	char a[50],t;
	printf ("请输入字符串：");
	gets(a);
	n = strlen(a);
	for (i=1;i<=n-1;i++)
		for (j=0;j<n-i;j++)
			if (a[j]>a[j+1])
			{
				t  = a[j];
				a[j] = a[j+1];
				a[j+1] = t;		//注意是a[j+1]=t,不是a[j]=t;
			}
	puts(a);

}
*/


#include <stdio.h>
#include <string.h>
void main ()
{
	int i,j,n,min;
	char t,a[50];
	printf ("请输入字符串：");
	gets(a);
	n=strlen(a);
	for (i=0;i<n-1;i++)
	{
		min = i;
		for (j=i+1;j<n;j++)
			if (a[j]<a[min])
				min = j;
		if (i!=min)
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}
	puts (a);
}
