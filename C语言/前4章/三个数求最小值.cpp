//�Ӽ����������������������ǵ���Сֵ��

#include <stdio.h>
void main()
{
	int x,y,z,min;
	printf("����������������");
	scanf("%d %d %d",&x, &y, &z);
	min = x;
	if (min>y)
		min = y;
	if (min>z)
		min = z;
	printf("��СֵΪ��%d",min);

}