//����ѧ�����÷��������Ϊ����ȼ���д���������Զ�����Ϊĳ���ȼ�������90~100λA�ȣ�������������,0~59��ΪE�ȡ�

#include <stdio.h>
void main()
{
	float score;
	printf ("������ѧ�����õķ�����");
	scanf ("%f",&score);
	if (score>=90)
		printf("A\n");
	else if (score>=80)
		printf("B\n");
	else if (score>=70)
		printf ("C\n");
	else if (score>=60)
		printf ("D\n");
	else if (score>=0)
		printf ("E\n");
	else
		printf ("�������벻��ȷ��");

}