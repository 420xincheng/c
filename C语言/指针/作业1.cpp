/*程序功能是通过调用reverse()函数将数组中指定范围内的元素按逆序重新放置，请补全程序。
*/
#include <stdio.h>
#define N 10
void reverse(int * p, int a, int b)
{
    /***** Begin *****/
	int i,j,x[N];
	
	
	for (i=a,j=0; i<=b; i++,j++)
		x[j]= p[i];
	for (i=b,j=0; i>=a; i--,j++)
		p[i] = x[j];
	
	

	/***** End *****/
}
/*还是要熟练运用指针啊
 /***** Begin *****/
    while(a<b)
    {
        int tem=*(p+a);
        *(p+a)=*(p+b);
        *(p+b)=tem;
        a++;
        b--;
    }
    /***** End *****/
*/
int main()
{
    int a[N], i, begin, end;
    for (i=0; i<N; i++)
        scanf("%d",&a[i]);
	scanf("%d%d",&begin,&end);
    reverse(a, begin, end);
    for (i=0; i<N; i++)
        printf("%d ",a[i]);
	printf("\n");
	return 0;
}