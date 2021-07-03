/*将1－200中所有能被6整除、但不能被4整除的数存到一个一维数组中，并输出。
*/

#include <stdio.h>
void main ()
{
	int a[50],i,j=0,k=0;
	for (i=1;i<=200;i++)
		if (i%6==0 && i%4!=0)
		{
			//k++;
			//while (j<k)
			//{
				a[j]=i;
				j++;
			//}
		}
	
	for (i=0;i<j;i++)	
		printf ("%4d",a[i]);
}
/*k的存在好像不必要
*/