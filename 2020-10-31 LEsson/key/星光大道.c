#include<stdio.h>
#define N 10
int main()
{
	int a[N],i,j,temp,n=0;
	double ave;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
		for(j=N-1;j>i;j--)
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			};
	for(i=1;i<N-1;i++)
			n+=a[i];
		ave=n*1.0/(N-2);
	printf("%lf",ave);
	while(1);
	return 0;
}

