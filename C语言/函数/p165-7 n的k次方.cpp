/*��дpower()��������n^k��ֵ������n��k��ֵ������power��������1^k+2^k+3^k+...+n^k��ֵ���������
*/
#include <stdio.h>
int power(int n,int k)
{
	 int a=1,i;
	 if (k!=0)
		 for (i=1;i<=k;i++)
			 a = a*n;
	 return a;
}
void main ()
{
	int sum=0,j;
	int k,n;
	printf("������n��k��ֵ��");
	scanf("%d %d",&n,&k);
	for (j=1;j<=n;j++)
		sum = sum+power(j,k);
	printf ("sum=%d\n",sum);
}