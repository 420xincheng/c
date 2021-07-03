#include<stdio.h>
#define N 100
int a[N][N];
int main()
{	
	int i, j, n;
	printf ("请输入n的大小：");
	scanf("%d", &n);
	
	for(i = 0;i < n;i++) //使数组的第一列都为1
	a[i][0] = 1;

	for(i = 1;i < n;i++) 
		for(j = 1;j <= i;j++)
		a[i][j] = a[i-1][j] + a[i-1][j-1];//杨辉三角形实现 

	for(i = 0;i < n;i++)   
	{
		for(j = 0;j <= i;j++)
		if(i == j) printf("%d\n", a[i][j]);
		else printf("%d ", a[i][j]);
	}
	return 0;
} 
/*
#include <stdio.h>
int main ()
{
    int n,i,j,x[30][30]={};		//必须把数组清空全部为0
    scanf ("%d",&n);
    for(i=0;i<n;i++)
        x[i][0]=1;
    
    for (i=1;i<n;i++)
        for(j=1;j<=i;j++)
            x[i][j]=x[i-1][j]+x[i-1][j-1];
  
    for (i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(i==j)
                printf ("%d\n",x[i][j]);
            else
                printf("%d ",x[i][j]); }     
    }
    return 0;
}*/


