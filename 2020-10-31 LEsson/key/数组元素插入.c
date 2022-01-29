#include <stdio.h>
int main(int argc, char *argv[])
{//长度11，最后3个元素初始化为0 
int a[11]={0,1,2,3,4,11,12,13 	};
int b,insertpos;
int i;
for(i=0; i<11; i++)

	{		printf("%d, ",a[i]);

	}

		printf("\n------input:",a[i]);

	

	scanf("%d", &b);

	insertpos=0;

	//i< 有效元素的个数	
for(i=0; i<8; i++)

	{	// 找到插入位置 

		if( a[i] < b)

		{	insertpos++;

		}	

		else 

			break; 		

	}

 

	for(i=10; i> insertpos; i--)

	{	 a[i]=a[i-1];	//后移 

	}

	//然后赋值到指定位置 

	a[insertpos] =b;

	for(i=0; i<11; i++)

	{		printf("%d, ",a[i]);

	}

		

	return 0;

}
