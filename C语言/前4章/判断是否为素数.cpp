/* #include <stdio.h>
void main ()
{
	int x,i,flag=1;				//flagΪ��־����
	scanf ("%d",&x);
	for (i=2; i<=x-1; i++)
		if (x%i==0)				//��x�� 2����x-1������κ�������������flag=0������������
		{
			flag=0;
			break;
		}
	if (flag)
		printf ("%d������\n",x);
	else
		printf ("%d��������\n",x);

}	*/


#include <stdio.h>
#include <math.h>
void main ()
{
	int x,i,k,flag=1;
	scanf ("%d",&x);
	k=sqrt((double)x);					//��ѧ��֤��ֻҪx����2~sqrt(x)֮�������������������
	for (i=2;i<=k;i++)
		if (x%i==0)
		{
			flag=0;
			break;
		}
		if (flag)
			printf ("%d������\n",x);
		else 
			printf("%d��������\n",x);
}
