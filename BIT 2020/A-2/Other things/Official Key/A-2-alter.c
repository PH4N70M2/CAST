#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min(int a, int b){
	return a<b?a:b;
}

int main(){
	int N,K,W;
	scanf("%d%d%d",&N,&K,&W);

	double *sum=(double*)malloc(8*(K+W+2));
	memset(sum,0,8*(K+W+2));
	sum[0]=1;
	int i;
	for(i=1;i<=K+W;i++){
		int t=min(i-1,K-1);
		if(i<=W){
			sum[i]=sum[i-1]+sum[t]/W;
		}
		else{
			sum[i]=sum[i-1]+(sum[t]-sum[i-W-1])/W;
		}
	}
	double ans=(sum[N]-sum[K-1])/(sum[K+W-1]-sum[K-1]);
	printf("%lf",ans);
	free(sum);
}