/*����ð�ݷ�������������д�С��������ĺ�������main�е��ô˺���
*/

#include <stdio.h>
void main ()
{
	int x[100],i,N;			//NΪ���ݵĸ���
	void Bubblesort(int x[],int n);
	scanf ("%d",&N);
	printf ("������%d�����ݣ�",N);
	for (i=0;i<N;i++)
		scanf ("%d",&x[i]);
	Bubblesort (x,N);
	printf ("������Ϊ��\n");
	for (i=0;i<N;i++)
		printf ("%5d",x[i]);

}

void Bubblesort(int x[],int n)
{
	int i,j,t;
	for (i=1;i<n;i++)
		for (j=0;j<n-i;j++)		//����ÿһ�˵ıȽϴ���
			if (x[j]>x[j+1])
			{
				 t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		
}