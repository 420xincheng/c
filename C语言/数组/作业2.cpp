/*�Ӽ�������һ��M��M�ľ��󣬷ֱ���þ������Խ����ϵ�Ԫ��֮�͡��Լ����Խ����ϵ�Ԫ��֮�͡�Ҫ��M��ֵ�Ӽ������룬��M��ֵС��10��
*/
#define N 10
#include <stdio.h>
void main ()
{
	 int sum1=0,sum2=0,M;
	 int i,j;
	 scanf ("%d",&M);
	 int x[N][N];
	 for (i=0;i<M;i++)			
		 for (j=0;j<M;j++)
		 {
			 scanf ("%d",&x[i][j]);
			 if (i==j)
				 sum1 = sum1+x[i][j];
			 if (i+j ==M-1)
				 sum2 = sum2+x[i][j];
		 }
	printf ("%d\n%d\n",sum1,sum2);

}

//ע�ⲻ�þ������鲻��Ϊ���������⣬ֻ��Ҫi<M��M�Ǿ���Ľ������ɣ�����������鲻��������