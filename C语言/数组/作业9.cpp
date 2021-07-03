/*题目描述:输入n（n<100）的值，以及n个从小到大排序的整数序列，再输入一个待查找的整数m，使用二分法进行查找该数的序号。
编程要求：
输入：第一行为整数 n，第二行包括 n个整数，以空格分隔，第三行为整数 m。
输出：如果能够在序列中找到整数 m，则输出其编号（编号从1开始，如果存在多个编号，则返回编号最小的），否则输出 None。
*/
#define M 100
#include <stdio.h>
void main ()
{
	int n,a[M],m,i;
	int pos=-1;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d ",&a[i]);
	scanf ("%d",&m);
	int low=0,high=n-1;
	while (low<=high)
	{
		int middle=(high+low)/2;
		if (a[middle]==m)
		{
			pos = middle+1;
			break;
		}
		else if (a[middle]>m)
			high = middle-1;
		else
			low = middle+1;
	}
	if (pos!=-1)
		printf ("%d\n",pos);
	else
		printf ("None\n");
}