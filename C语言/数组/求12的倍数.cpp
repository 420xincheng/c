//��1-1000������12�ı�����ŵ�һ��һά�����У���������顣

#include <stdio.h>
void main ()
{
	int i,a[100],j=0;					//j���ڼ���
		for (i=1;i<=1000;i++)
		{
			if (i%12==0)
			{
				a[j]=i;
				j++;
			}
		}
		for (i=0;i<j;i++)
		{
			if (i%10==0)
				printf ("\n");
			printf ("%-5d",a[i]);
		}
}