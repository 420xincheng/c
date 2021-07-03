
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
/*p q r 本身所占的字节数是一样的
一个指针变量，无论它指向的变量占几个字节，该指针变量本身只占4个字节，32位=4个字节，1个字节=8
一个变量的地址使用该变量首字节的地址来表示
*/