//�Ӽ�������10�������������У����������ĸ�������ƽ��ֵ������������

#include <stdio.h>
void main ()
{
	int i, x[10],k=0;
	float sum=0;
	printf ("������10��������");
	for (i=0;i<10;i++){
		scanf ("%d",&x[i]);
		
		if (x[i]>0){
			sum = sum +x[i];
			k++;
		}
	}
	
	printf ("�����ĸ���Ϊ��%d��ave=%5.2f\n",k,sum/k);
}