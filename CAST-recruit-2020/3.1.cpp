#include<stdio.h>

using namespace std;

void solve(int n. char a, char b, char c){
	if(n==1){
		printf("%c->%c",a,c);
		return;
	}
	else{
		solve(n-1,a,c,b);
		printf("%c->%c",a,c);
		solve(n-1,b,a,c);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	solve(n,'A','B','C');
	return 0;
}