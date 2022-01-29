#include<stdio.h>

int a[101];
int n;

void swp(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void selectsort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int t=a[i];
		for(j=i+1;j<n;j++){
			if(a[i]>a[j])
				t=(t<a[j])?t:a[j];
		}
		swp(a[i],t);
	}
}

void init(int a[],int *n){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int main(){

	init(a,&n);
	selectsort(a,n);

	return 0;
}
