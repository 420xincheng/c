��С������=�������ĳ˻������Լ��

#include <stdio.h>
int main()
{
    int m,n,max,min,b,c;
	printf("����������������\n");
	scanf("%d%d",&m,&n);
    c=m%n;
    b=m*n;
	while(c!=0)
	{
        		m=n;
		n=c;
      		c=m%n;
	}
    max=n;
	min=b/max;
	printf("\n���Լ��Ϊ��%d\n��С������Ϊ��%d\n",max,min);
    return 0;
}




#include <stdio.h>
void main ()
{
	int m,n;
	int k,t;
	printf ("������������������");
	scanf ("%d%d",&m,&n);
	if (m<n)						//m��Žϴ�����n��Ž�С��
	{
		t = m;
		m = n;
		n = t;
	}
	k = m;							//k��m��1��
	while (k%n!=0)
	{
		k = k+m;					//ÿ������һ�������ܹ���n����ʱ��k��Ϊ��С������
	}
	printf ("��С������k=%d\n",k);		//��С������һ����m��n��������
}


������

//��С�������϶���m��n�����������������k=m,��k���ܹ���m����n����ʱ��k+1��ֱ���ܹ�������Ϊֹ��

#include <stdio.h>
void main ()
{
	int m,n,x;
	
	printf ("������������������");
	scanf ("%d %d",&m,&n);
	x=m;
	while (x%m!=0 || x%n!=0)
		x++;
	printf ("��С������Ϊ%d\n",x);
}


������
#include <stdio.h>
void main ()
{
int m,n,k;
printf ("������������������");
scanf ("%d%d",&m,&n);
k=m;
while (1)
{
	if (k%m==0 && k%n==0)
		break;
	k++;
}
       printf ("��С������Ϊ%d",k);
}



 