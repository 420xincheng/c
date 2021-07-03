/*有两个羽毛球队进行比赛，各出3人，甲队为a,b,c乙队为x,y,z.第一场比赛通过抽签决定对阵名单。
抽签结果是：a不和x比，c不和x、z比，请编程输出3对选手的对阵名单*/
//我竟不知如何转换题目中所给条件？？？

#include <stdio.h>
void main ()
{
	char a,b,c;
	for (a='x';a<='z';a++)
		for (b='x';b<='z';b++)
		{
			if (a!=b)
				for (c='x';c<='z';c++)
				{
					if (c!=a && c!=b)
					{
						if (a!='x' && c!='x' && c!='z')
						{
							printf ("对阵名单为：\n");
							printf ("a PK %c   b PK %c  c PK %c\n",a,b,c);
						}
					}
				}
		}
}