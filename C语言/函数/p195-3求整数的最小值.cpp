/*��дmin(x,y,z)����3�������е���Сֵ�������øú�����5�������е���Сֵ��
Ҫ�� ��������������5������������������
*/
#include <stdio.h>
int min(int x,int y,int z)
{
	int min;
	min = x;
	if (min>y)
		min = y;
	if (min>z)
		min = z;
	return min;

}

void main ()
{
	int a,b,c,d,f;
	int min1,min2,result;
	printf ("����������5���������Կո��������\n");
	scanf ("%d %d %d %d %d",&a,&b,&c,&d,&f);
	min1=min(a,b,c);
		min2=min(min1,d,f);
	result = min2;
	printf ("5��������СֵΪ��%d\n",result);
}