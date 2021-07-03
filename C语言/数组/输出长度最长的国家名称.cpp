/*从键盘输入若干个国家的名称，输出长度最长的国家名称及其长度值。
输入的国家个数不定，最多不超过100个，国家的名称的最大长度不超过20，
输出0表示输入结束。*/
//由于国家个数不定，所以采用无限循环while（1）

#include <stdio.h>
#include <string.h>
void main ()
{
	char name[100][20];
	int len,maxlen=0;				//len保存国家名称的长度，maxlen保存最大值
	int i=0,k;					//i为循环控制变量,k保存名称最长国家的数组下标
	while (1)
	{
		printf ("请输入您想去的地方吧~：");
		scanf ("%s",name[i]);
		if (strcmp(name[i],"0")==0)			//输入结束标志
			break;
		len = strlen(name[i]);
		if (len>maxlen){
			maxlen = len;
			k = i;							//保存名称最长的国家的数组下标
		}
		i++;
	}
	printf ("长度最长的国家名称是：%s\n",name[k]);
	printf ("该国家的名称长度为：%d\n",maxlen);				//经过实践检验，只能保存一个最大值

}
