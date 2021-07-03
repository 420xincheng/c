/*	malloc    m即memory(内存)，alloc-allocate(分配)

*/
/*
#include <stdio.h>
#include <malloc.h>
int main ()
{
	int i=5;
	int * p = (int *)malloc(4);		//12行
				
				1.要使用malloc函数，必须加	malloc.h 这个头文件
				2.malloc函数只有一个形参，且形参为整型
				3.4表示请求系统为本程序分配4个字节
				4.malloc函数只能返回第一个字节的地址
				5.12行分配了8个字节，p变量占4个字节，p指向的内存也占4个字节
				6.p本身所占的内存是静态分配的，p所指向的内存是动态分配的
				
		free(p);			//free(p)表示把p所指向的内存给释放了	
		printf ("同志们好！\n");
	return 0;
}
*/
/*
#include <stdio.h>
#include <malloc.h>

void f(int * q)
{
	//*p = 200;		//error ,p是main中的变量
	//q = 200;		//q存放的是地址，不能将整型变量赋给q
	//**q = 200;	//error,*q代表了一个变量，整型变量前面不能加*，只有 指针变量前可以
	*q = 200;
	//free(q);			//把q的内存释放出来
}

int main ()
{
	int * p = (int *)malloc(sizeof (int));		//sizeof(int )返回值是int所占的字节数
							//即p指向4个字节
	*p = 10;

	printf ("%d\n",*p);		//10
	f(p);
	printf ("%d\n",*p);	//200

	return 0;
}
*/

#include <stdio.h>
#include <malloc.h>			//动态一维数组

int main ()
{
	int a[5];
	int len,i;
	int * pArr;

	printf ("请输入你要存放的元素的个数：");
	scanf ("%d",&len);
	pArr = (int *)malloc(4 * len);				//类似于int pArr[len];本语句动态构造了一个一维数组
	//对一维数组进行操作
	for (i=0;i<len;i++)
		scanf("%d",&pArr[i]);

	for (i=0;i<len;i++)
		printf ("%d\n",pArr[i]);

	free(pArr);//释放内存

	return 0;
}