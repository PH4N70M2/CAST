#include<stdio.h>

void swp(int *a, int *b){
	int tmp=*b;
	*a=*b;
	*b=tmp;
}

void bubblesort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i+1;j++){
			if(a[j]>a[j+1])
				swp(a[j],a[j+1]);
		}
	}
}

int main(){
	int a[10];
	int i;
	int n=10;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	bubblesort(a,n);

	double ans=0;
	for(int i=1;i<n-1;i++){
		ans+=a[i]*1.0/(n-2);
	}

	printf("%lf",ans);
	return 0;
}