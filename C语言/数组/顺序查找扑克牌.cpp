/*������0-53����ʾ54���˿��Ƶı�ţ����Ϊ�û��������13���ƣ�
���������ĳһ���Ƶı�ţ�����˳����ҷ������������Ƿ����û����С�
*/

#define n 13
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
	int card,i;							//card���ڱ������������һ����
	int cards[n];						//�����û����ϵ���
	int flag[54]={0};					//54���˿��Ƶı�־λ����ֵΪ0����ʾû����
	int aim,pos=-1;						//aim��Ҫ���ҵ��ƣ�pos ���ڵ�λ��
	for (i=0;i<n;i++)					//����13����
	{
		card = rand()%54;				//�������һ���ƣ�0-53����������
		while (flag[card]==1)			//�����Ѿ����������ط���ֱ����ЧΪֹ
			card = rand()%54;
		flag[card]=1;					//����Ч�Ƶı�־λ�ñ�Ϊ1
		cards[i] = card;				//����Ч�Ƹ�������

	}
	printf ("�û����е���Ϊ��");
	for (i=0;i<n;i++)
		printf ("%d ",cards[i]);
	printf ("\n������Ҫ���ҵ��Ƶı�ţ�");
	scanf ("%d",&aim);
	for (i=0;i<n;i++)//
		if (cards[i]==aim)
		{
			pos = i;
			break;
		}
		if (pos!=-1)
			printf ("�ǵ�%d����\n",pos+1);
		else
			printf ("û�ҵ�\n");
}