/*����Ʒ�ı�ź͵��۵���Ϣ���浽�ṹ�������У�������˿͹����ĳ����Ʒ�ı�ź�����������
�������Ʒ���ơ����ۡ�������Ӧ�ս��*/

#include <stdio.h>
#include <string.h>
struct 
{
	char num[10];
	char name[5];
	float price;
}goods[5];
void main ()
{
	int i,amount;
	char number[10];				//��ʾ����
	for (i=0;i<5;i++)
	{
		printf ("�������%d����Ʒ�ı�ţ�",i+1);
		scanf ("%s",goods[i].num);
		printf ("�������%d����Ʒ�����ƣ�",i+1);
		scanf ("%s",goods[i].name);
		printf ("�������%d����Ʒ�ĵ��ۣ�",i+1);
		scanf ("%f",&goods[i].price);

	}
	printf ("��������������Ʒ�ı�ţ�");
		scanf ("%s",number);
	printf ("�������������������");
		scanf ("%d",&amount);
		  for (i=0;i<5;i++)
			  if (strcmp(number,goods[i].num)==0)
				  printf ("��Ʒ���ƣ�%s,���ۣ�%.2f,������%d,Ӧ�ս�%.2f\n",
				  goods[i].name,goods[i].price,amount,amount*goods[i].price);

}