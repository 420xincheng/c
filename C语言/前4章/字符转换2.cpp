#include <stdio.h>			
int main()					
{
	//********Begin*********
	char x;
	x=getchar();
    if (x>='A'&&x<='Z')
	{
        x+=32;
	}
	else if (x>='a'&&x<='z')
	{
        x-=32;
	}
		putchar(x);
	//********End*********** 
	return 0;
}
