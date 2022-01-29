#include <stdio.h>
#include <stdlib.h>
int find(int a[], int n, int x);
int main()
{
    int n,i,x;   int a[10];
    printf("输入数组个数：");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {    printf("输入数组第%d个数：",i+1);
	    scanf("%d",&a[i]);
    }
    printf("输入想要查找元素：");
    scanf("%d",&x);
    if(find(a,n,x) != -1)
    {
        printf("该数在数组中位置为%d",find(a,n,x)+1);
    }
    else
    printf("Not Found");
    return 0;
}
int find(int a[], int n, int x)
{
    int i,flag,t;
    flag = 0;
    for (i = 0; i<n; i++)
    {
        if ( a[i] == x)
        {
            flag = 1;
            t = i;
        }
    }
    if( flag == 1)
        return t;
    else
        return -1;
}

