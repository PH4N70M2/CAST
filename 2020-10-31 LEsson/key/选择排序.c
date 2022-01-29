#include<stdio.h>
void SelectSort(int a[],int n)
{	int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        int min=i;  //存放数组最小值的位置 
        
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min]){
                min=j;   //找出最小值，并记录位置 
            }
         } 
         if(min!=i) //最小元素与第i个元素互换位置 
         {
            int swap=a[min];
             a[min]=a[i];
             a[i]=swap;
         }
    }
}
int main()
{	int i=0;
    int a[]={8,9,7,1,5,4,2,3,6};
    int n=sizeof(a)/sizeof(int);
    SelectSort(a,n);
     printf("选择排序结果：");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
