
#include <stdio.h>

int main ()
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char * p=&ch;
	int * q = &i;
	double * r = &x;
	printf ("%d %d %d\n",sizeof(p),sizeof(q),sizeof (r));
	return 0;
}
/*p q r ������ռ���ֽ�����һ����
һ��ָ�������������ָ��ı���ռ�����ֽڣ���ָ���������ֻռ4���ֽڣ�32λ=4���ֽڣ�1���ֽ�=8
һ�������ĵ�ַʹ�øñ������ֽڵĵ�ַ����ʾ
*/