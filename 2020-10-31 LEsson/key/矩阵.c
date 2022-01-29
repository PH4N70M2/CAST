#include <stdio.h>
#define M 2
#define S 3
#define N 4
int main()
{
	int m=0,s=0,n=0,i=0,j=0;
	double Arr1[M][S]={0};
	double Arr2[S][N]={0};
	double Arr3[M][N]={0};


	printf("Welcome!\nPlease input Arr1\n");
		for (m=0;m<M;m++)
	{
		for (s=0;s<S;s++)
		scanf("%lf",&Arr1[m][s]);
	}
		for (m=0;m<M;m++)
	{
		for (s=0;s<S;s++)
			printf("%3.1lf\t",Arr1[m][s]);
			printf("\n");
		}
	printf("\nPlease input Arr2\n");
		for (s=0;s<S;s++)
	{
		for (n=0;n<N;n++)
		scanf("%lf",&Arr2[s][n]);
	}
		for (s=0;s<S;s++)
	{
		for (n=0;n<N;n++)
			printf("%3.1lf\t",Arr2[s][n]);
			printf("\n");
		}
		//读入两个矩阵
		m=0;n=0;s=0;
		for (i=0;i<M;i++)
			for (j=0;j<N;j++)
				for(m=i,n=j,s=0;s<S;s++)
					Arr3[i][j]+=Arr1[m][s]*Arr2[s][n];
		//计算所求矩阵
		
		printf("\nAnswer=\n");
		m=0;n=0;
		for (m=0;m<M;m++)
		{
			for (n=0;n<N;n++)
			printf("%3.1lf\t",Arr3[m][n]);
			printf("\n");
		}
		//输出所求矩阵
	while(1);
	return 0;
}
