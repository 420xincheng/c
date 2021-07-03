#include <stdio.h>

void outArr (int * pArr, int len)		//Arr是数组的缩写
{
					//pArr[2]=10;						//pArr[2] == *(pArr+2) == *(a+2) == a[2]
	int i;

	for (i=0;i<len;i++)
		printf ("%d\n",pArr[i]);
}

int main ()
{
	int a[5]={1,2,3,4,5};
	
	//printf ("%d\n",a[2]);

	outArr(a,5);

	//printf ("%d\n",a[2]);

	//a = &a[2];	//error 因为a是常量		//a == &a[0]
	//printf ("%#X,%#X\n",a,&a[0]);
	return 0;
}
/*总结：
只发送main函数的数组的首地址和长度，利用指针就可以修改main数组的值
*/