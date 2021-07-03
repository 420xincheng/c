/*给出一个包含 n个整数的数列，问整数 a在数列中出现的次数，以及第一次出现的位置(位置从1开始编号)。
输入：第一行输入整数 n。 第二行输入n个非负整数，为给定的数列。第三行输入整数a，为待查找的数。 
输出:第一行输出整数a在数列中出现的次数。第二行 如果a在数列中出现了，则输出它第一次出现的位置，否则输出-1。
*/

#include <stdio.h>
void main ()
{
	int n,a,i,k=0,x[20];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf ("%d",&x[i]);
	scanf("%d",&a);
	for (i=0;i<n;i++)
	{
		if (a==x[i])
			k++;
	}
	printf ("%d\n",k);
	for (i=0;i<n;i++)
	{
		if (a==x[i]){
			printf ("%d\n",i+1);
			break;}
	}
}