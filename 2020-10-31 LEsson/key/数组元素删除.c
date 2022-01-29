#include <stdio.h>
#include <stdlib.h>

void PrintArr(int a[], int n);
void del(int a[], int n, int i);
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
    scanf("%d",&x);
    if(find(a,n,x) != -1)
    {
        del(a,n,find(a,n,x));
        PrintArr(a,n);
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
void del(int a[], int n, int i)  /*删除数组a中下标为i的元素*/
{
    int j,k;
    for (j = 0; j<n; j++)
    {
        if(j == i)
        {
            for ( k = i; k<n-1; k++)
            {
                a[k] = a[k+1];
            }
            break;
        }
    }
}
void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
{
    int i;
    for (i = 0; i<n-1; i++)
    {
        printf("%4d",a[i]);
    }
}

