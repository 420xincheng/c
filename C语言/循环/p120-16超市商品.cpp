/*将商品的编号和单价等信息保存到结构体数组中，当输入顾客购买的某种商品的编号和数量，计算
并输出商品名称、单价、数量和应收金额*/

#include <stdio.h>
#include <string.h>
struct 
{
	char num[10];
	char name[5];
	float price;
}goods[5];
void main ()
{
	int i,amount;
	char number[10];				//表示数量
	for (i=0;i<5;i++)
	{
		printf ("请输入第%d项商品的编号：",i+1);
		scanf ("%s",goods[i].num);
		printf ("请输入第%d项商品的名称：",i+1);
		scanf ("%s",goods[i].name);
		printf ("请输入第%d项商品的单价：",i+1);
		scanf ("%f",&goods[i].price);

	}
	printf ("请输入您购买商品的编号：");
		scanf ("%s",number);
	printf ("请输入您购买的数量：");
		scanf ("%d",&amount);
		  for (i=0;i<5;i++)
			  if (strcmp(number,goods[i].num)==0)
				  printf ("商品名称：%s,单价：%.2f,数量：%d,应收金额：%.2f\n",
				  goods[i].name,goods[i].price,amount,amount*goods[i].price);

}