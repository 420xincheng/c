/*��  x = m!/(n!*(m-n)!)
idea:��дһ��������n!��ֵ���ú�����Ҫһ������������ֵ����Ϊ����
*/
#include <stdio.h>
int fac(int k)					//��n!
{
	int i,f=1;
	for (i=1;i<=k;i++)
		f = f*i;
	return f;
}
int comb(int m,int n)			//�����
{
	int c;
	c = fac(m)/(fac(n)*fac(m-n));
	return c;
}
void main ()
{
	int m,n,c;
	printf ("������m��n��ֵ��m>n��:");
	scanf ("%d %d",&m,&n);
	c=comb(m,n);
	printf ("c=%d\n",c);

}




/*
#include <stdio.h>
void main ()
{
	int fac(int k);
	int m,n,c;
	printf ("������m��n��ֵ(m>n):");
	scanf ("%d %d",&m,&n);
	c = fac(m)/(fac(n)*fac(m-n));
	printf ("c=%d\n",c);
}

int fac(int k)
{
	int i,f=1;
	for (i=1;i<=k;i++)
		f = f*i;
	return f;
}
*/