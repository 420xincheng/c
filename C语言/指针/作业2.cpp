/*��һ���ַ���, ���ס�β�ַ�֮��������ַ���ASCII�뽵�����С�
*/
#include <stdio.h>

void fun(char *s, int num)
{
    /***** Begin *****/
	int i,j;
	char t;
	for (i=1;i<=num-3;i++)
		for (j=1;j<=num-2-i;j++)
			if (s[j]<s[j+1])
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1]= t;
			}
	
	/***** End *****/
}
int main()
{
    char s[10];
    scanf("%s",s);
    fun(s, 7);
    printf("%s\n",s);
    return 0;
}
