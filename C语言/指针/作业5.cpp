/*
    ��������ѡ�ˡ�Li������Zhang������Sun����ÿ��ѡ��ֻ��ͶһƱ��дһ����
�ýṹ���������洢���ݣ����ͶƱ�����
*/
#include<stdio.h>
#include<string.h>
struct candidate{
    char name[20];
    int count;
}person[3]={"Li",0,"Zhang",0,"Sun",0};
int main(void)
{
    /*********Begin*********/
    char name[100];
	int i,j;
	int n;
	scanf ("%d",&n);
	for (i=1; i<=n; i++){
		scanf("%s",name);
		for (j=0; j<3; j++)
 			if (strcmp(name,person[j].name )==0)
				person[j].count ++;
	}
	for (i=0; i<3; i++)
		printf ("%s:%d\n",person[i].name ,person[i].count );

    /*********End**********/
    return 0;
}
