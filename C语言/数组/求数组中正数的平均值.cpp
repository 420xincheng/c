//从键盘输入10个整数到数组中，求其正数的个数及其平均值，并输出结果。

#include <stdio.h>
void main ()
{
	int i, x[10],k=0;
	float sum=0;
	printf ("请输入10个整数：");
	for (i=0;i<10;i++){
		scanf ("%d",&x[i]);
		
		if (x[i]>0){
			sum = sum +x[i];
			k++;
		}
	}
	
	printf ("正数的个数为：%d，ave=%5.2f\n",k,sum/k);
}