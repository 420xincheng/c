//��ֶκ�����ֵ

#include <stdio.h>
int main ()
{
	int x,y;
	printf("������x��ֵ��");
	scanf ("%d",&x);
	if (x<0)
		y=-1;
	if (x==0)
		y=0;
	if (x>0) 
		y=1;
	printf("x=%d,y=%d\n",x,y);	
	return 0;
}