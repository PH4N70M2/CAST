#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>;
int a[10000],b[10000];
int x=0;

void init(){
	FILE* fp=fopen("cipher1.txt","r");
	while (fscanf(fp,"%d", a+x)!=EOF) {
		b[x] = a[x];
		x++;
	}
	fclose(fp);
	
}


int main(){

	memset(a,0,sizeof(a));
//	freopen("cipher1.txt","r",stdin);

	init();

	FILE* fp=fopen("raw.txt","w");
	char p[4]="god";

	for(int i=0;i<x;i++){
		b[i]=p[i%3]^a[i];
		fprintf(fp,"%c",b[i]);
	}

	fclose(fp);
}