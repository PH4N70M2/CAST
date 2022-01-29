#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

const int N=1e6+2;

char s[N];
int list[N];

int main(){
	
	memset(list, 0, sizeof(list));
	getline(cin,s+1);

	int p=0, tail=0;

	for(int i=1; s[i]; i++){
		if(s[i]=='[')
			p=0;
		else
			if(s[i]==']')
				p=tail;
			else{
				list[i]=list[p];
				list[p]=i;
				if(p==tail)
					tail=i;
				p=i;
			}
	}
	while(i){
		printf("%c",s[i]);
		i=list[i];
	}
	return 0;
}