/*	malloc    m��memory(�ڴ�)��alloc-allocate(����)

*/
/*
#include <stdio.h>
#include <malloc.h>
int main ()
{
	int i=5;
	int * p = (int *)malloc(4);		//12��
				
				1.Ҫʹ��malloc�����������	malloc.h ���ͷ�ļ�
				2.malloc����ֻ��һ���βΣ����β�Ϊ����
				3.4��ʾ����ϵͳΪ���������4���ֽ�
				4.malloc����ֻ�ܷ��ص�һ���ֽڵĵ�ַ
				5.12�з�����8���ֽڣ�p����ռ4���ֽڣ�pָ����ڴ�Ҳռ4���ֽ�
				6.p������ռ���ڴ��Ǿ�̬����ģ�p��ָ����ڴ��Ƕ�̬�����
				
		free(p);			//free(p)��ʾ��p��ָ����ڴ���ͷ���	
		printf ("ͬ־�Ǻã�\n");
	return 0;
}
*/
/*
#include <stdio.h>
#include <malloc.h>

void f(int * q)
{
	//*p = 200;		//error ,p��main�еı���
	//q = 200;		//q��ŵ��ǵ�ַ�����ܽ����ͱ�������q
	//**q = 200;	//error,*q������һ�����������ͱ���ǰ�治�ܼ�*��ֻ�� ָ�����ǰ����
	*q = 200;
	//free(q);			//��q���ڴ��ͷų���
}

int main ()
{
	int * p = (int *)malloc(sizeof (int));		//sizeof(int )����ֵ��int��ռ���ֽ���
							//��pָ��4���ֽ�
	*p = 10;

	printf ("%d\n",*p);		//10
	f(p);
	printf ("%d\n",*p);	//200

	return 0;
}
*/

#include <stdio.h>
#include <malloc.h>			//��̬һά����

int main ()
{
	int a[5];
	int len,i;
	int * pArr;

	printf ("��������Ҫ��ŵ�Ԫ�صĸ�����");
	scanf ("%d",&len);
	pArr = (int *)malloc(4 * len);				//������int pArr[len];����䶯̬������һ��һά����
	//��һά������в���
	for (i=0;i<len;i++)
		scanf("%d",&pArr[i]);

	for (i=0;i<len;i++)
		printf ("%d\n",pArr[i]);

	free(pArr);//�ͷ��ڴ�

	return 0;
}