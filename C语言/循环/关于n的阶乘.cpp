//输入一个整数k, S=1*2*3*…*n，求S不大于k时最大的n。


#include <stdio.h>
void main ()
{
	int k,n,sum=1;
	scanf ("%d",&k);
	n=0;
	do
	{
		n++;                     		//n++需要在sum之前执行，若在之后执行则输出结果会比预测结果多1
		sum = sum*n;
	} 
	while 
		(sum<=k);

	printf ("%d",n-1);

}