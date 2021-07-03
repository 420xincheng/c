//
#include <math.h>
#include <stdio.h>
void main ()
{
	int i;
	double x[10],s,s1=0,ave,sum=0;
	printf ("请输入10个数：");
	for (i=0;i<10;i++){
		scanf ("%lf",&x[i]);
		sum = sum+x[i]; 
	}
	ave = sum/10;
	for (i=0;i<10;i++){
		s1 = s1+(x[i]-ave)*(x[i]-ave);
	}
	s = s1/10;
	s = sqrt(s);
	printf ("方差为%lf\n",s);
}