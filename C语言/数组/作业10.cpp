/*输入10个互不相同的整数并保存到数组中，找到最大元素并删除它，输出删除后的数组。
*/

#include <stdio.h>
void main ()
{
	int a[10],i,max=0;
	for(i=0;i<10;i++)
		scanf ("%d",&a[i]);
	for (i=1;i<10;i++)
		if (a[max]<a[i])
			max=i;
	for (i=max;i<10;i++)
		a[i]=a[i+1];
	for (i=0;i<9;i++)
		printf ("%d ",a[i]);
}