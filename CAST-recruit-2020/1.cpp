#include<stdio.h>
using namespace std;

void swap(int &a, int &b){
	int t=a;
	a=b;
	b=t;
}

int main(){
	int n, a[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<n-1;i++){
		int mp=i;
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				mp=j;
		swap(a[i],a[j]);

	}
}
