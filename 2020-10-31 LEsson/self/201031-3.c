#include<stdio.h>

int a[101];
int n;

void swp(int *a,int *b){
	int tmp=*a;
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

void init(int a[],int *n){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int main(){

	init(a,&n);
	bubblesort(a,n);

	return 0;
}
