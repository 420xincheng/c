
#include <stdio.h>
char * substr(const char * s,int n1,int n2)
{
	static char a[80];
	int i,j=0;
	for (i = n1-1; i<=n2-1;i++,j++)
		a[j] = s[i];
	a[j] = '\0';
	return a;
}
void main ()
{
	char s[80];
	int n1,n2;
	char * sub;
	printf ("ÇëÊäÈë×Ö·û´®£º");
	scanf ("%s",s);
	printf ("ÇëÊäÈëÆðÖ¹Î»ÖÃ£º");
	scanf ("%d %d",&n1,&n2);
	sub = substr(s,n1,n2);
	printf ("×Ö·û´®Îª£º");
	printf ("%s\n",sub);
}