#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu_node{			//�ṹ������
	char num[15];
	int score;
	struct stu_node * next;			//ָ����һ������ָ��
};
struct stu_node * stu_create()			//����������
{
	struct stu_node * head, *newn, *tail;
	char num[15];
	int score;

	//������һ����㣬����������

	printf ("������ѧ����ѧ�źͷ�����ѧ��=0ʱ��ʾ��������\n");
	scanf ("%s%d",num,&score);
	newn = (struct stu_node *)malloc(sizeof(struct stu_node));
	strcpy (newn->num,num);
	newn->score = score;
	newn->next = NULL ;						//��nextָ�븳ֵ
	head = newn;							//�տ�ʼΪ�ձ���ͷָ��ָ���½��

	//��������������㣬����������

	tail = newn;							//��βָ��ָ���½��

	while(1)
	{
		printf ("������ѧ����ѧ�źͷ�����\n");				
		scanf ("%s",num);
		if (strcmp(num,"0")==0)								//ѧ��Ϊ0���˳�ѭ��
			break;
		else												//�����½��
		{
			scanf ("%d",&score);
			newn = (struct stu_node*)malloc(sizeof(struct stu_node));
			strcpy(newn->num,num);
			newn->score = score;
			newn->next = NULL ;
			tail->next = newn;
			tail = newn;
		}
	}
	return head;							//�������ͷָ�뷵�ظ���������
}

void stu_printf (struct stu_node * head)				//�����������
{
	struct stu_node * p = head;
	if (p == NULL )
	{
		printf ("ѧ����ϢΪ�գ�\n");
		return;
	}
	printf ("ѧ��\t����\n");							//��ӡ��ͷ
	while (p!=NULL )
	{
		printf ("%s\t%d\n",p->num,p->score);				//�����ǰ��������
		p = p->next;										//��ָ�����p�Ƶ���һ�����
	}
}

void stu_modify (struct stu_node * head)				//�޸�ѧ����Ϣ����
{
	char num[15];
	struct stu_node * p = head;							//������ͷָ�븳��p
	if (head = NULL )
	{
		printf("ѧ����ϢΪ�գ�\n");
		return;
	}
	printf("������Ҫ�޸ĵ�ѧ����ѧ�ţ�");
	scanf ("%s",num);
	while (strcmp(p->num,num)!=0 && p!=NULL )			//���Ҹ�ѧ��
	p = p->next;										//��ָ�����p�Ƶ���һ�����
	if (p!=NULL )										//����ҵ���ѧ�����޸�
	{
		printf ("������Ҫ�޸ĵ�ѧ������");
		scanf ("%d",&p->score);
	}
	else
		printf ("δ�ҵ���ѧ����Ϣ");
}

struct stu_node * stu_delete(struct stu_node * head)			//ɾ��ѧ����Ϣ
{
	char num[15];
	struct stu_node * p = head,*p1;
	if (p=NULL )
	{
		printf ("ѧ����ϢΪ�գ�\n");
		return head;
	}
	printf ("������Ҫɾ����ѧ����ѧ�ţ�");
	scanf("%s",num);
	while (strcmp(p->num,num)!=0 && p!=NULL )				//����Ҫɾ����ѧ��
	{
		p1 = p;												//����p��p1
		p = p->next;										//��ָ�����p�Ƶ���һ�����
	}
	if (p!= NULL )											//�ҵ��˸�ѧ��
	{
		if (p == head)										//if��ɾ����ǵ�һ�����
			head = p->next;									//ʹͷָ��ָ���ɾ������һ�����
		else
			p1->next = p->next;								//ǰһ����ָ��ָ���ɾ������һ���
		free(p);											//�ͷŴ�ɾ�����ռ�õ��ڴ�
	}
	else
		printf ("δ�ҵ���ѧ�ŵ�ѧ����\n");
	return head;
}

void main()
{
	int choice;					//
	struct stu_node * head = NULL ;
	printf ("         ��ӭʹ��ѧ����Ϣ����ϵͳ\n");
	printf ("------------------------------------------\n");
	printf ("1.����ѧ������      2.��ʾѧ����Ϣ\n");
	printf ("3.�޸�ѧ����Ϣ      4.ɾ��ѧ����Ϣ\n");
	printf ("5.�˳�����\n");
	printf ("------------------------------------------\n");
	while (1)
	{
		 printf ("�����빦��ѡ��ģ��,��������1-5��");
		 scanf("%d",&choice);
		 switch(choice)
		 {
			 case 1:head = stu_create(); break;
			 case 2:stu_printf (head); break;
			 case 3:stu_modify (head); break;
			 case 4:head = stu_delete (head); break;
			 case 5:exit(0);
			 default:printf ("�������\n");
		 }
	}
}