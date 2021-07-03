/*将字符串中的前导*号全部移到字符串的尾部
*/
#include <stdio.h>
void  fun( char *a )
{
    /***** Begin *****/
	char *p = a;
	int k=0,i=0,j;
	while (*p =='*'){
		p++;
		k++;
	}
	while (*p){
		a[i] = *p;
		i++;
		p++;
	}
	for (j=i;j<k+i;j++)
		a[j] ='*'; 
	a[j]='\0';
	/***** End *****/
}
int main()
{
    char s[81];
    int n=0;
    scanf("%s",s);
    fun(s);
    puts(s);
    return 0;
}
