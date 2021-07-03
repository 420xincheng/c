/*
在主函数中输入n及n个学生的信息(包括学号，姓名，成绩)，调用函数按照成绩从高到低
的顺序进行排序，最后在主函数中输出排序后的学生信息。
*/
#include<stdio.h>
struct student
{
    char number[15];
    char name[20];
    int score;
};
void sort(struct student *p,int n)
{
    /*********Begin*********/
	struct student t;
	int i,j;
	for (i=1; i<n; i++)
		for (j=0; j<=n-i; j++)
			if (p[j].score<p[j+1].score){
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t; 
			}
	/*********End**********/
}
int main(void)
{
    struct student arr[200],t;
    int n,i,j;
    scanf("%d",&n);
	/*********Begin*********/
    for (i=0; i<n; i++)
		scanf ("%s %s %d",arr[i].number ,arr[i].name ,&arr[i].score );

	/*********End**********/
   	sort(arr,n);
	for(i=0;i<n;i++)
        printf("%s %s %d\n",arr[i].number,arr[i].name,arr[i].score);
    return 0;
}
