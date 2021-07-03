//从键盘输入3个整数，将这3个数由大到小进行排序后输出.

#include <stdio.h>
void main ()
{
	int a,b,c,t;
	printf ("请输入三个整数:");
	scanf ("%d%d%d",&a,&b,&c);
	if (a<b){
		t=a;a=b;b=t;}
	if (a<c){
		t=a;a=c;c=t;}
	if (b<c){
		t=b;b=c;c=t;}
	printf ("%d %d %d",a,b,c);

}
