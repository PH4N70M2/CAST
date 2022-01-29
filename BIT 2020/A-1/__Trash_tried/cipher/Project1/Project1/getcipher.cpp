#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char ref[]=" 0123456789qwertyuiopasdfghjklzxcvbnnmQWERTYUIOPASDFGHJKLZXCVBNNM,.()";
int a[10000],b[10000];
int x=0;

int isEN(int x){
	for(int y=0;ref[y];y++){
		if(x==ref[y])
			return y;
	}
	return -1;
}

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

	FILE* fp=fopen("get.txt","w");

	fprintf(fp, "%d:", x);
	for(int i=0;i<x;i++)
		fprintf(fp, "%d ", a[i]);
	fprintf(fp, "\n\n");

	int p[3]={0,0,0};
	for(p[0]='a';p[0]<='z';p[0]++){
		for(p[1]='a';p[1]<='z';p[1]++){
			for(p[2]='a';p[2]<='z';p[2]++){
				fprintf(fp, "%c%c%c: ", p[0], p[1], p[2]);
				for(int i=0;i<x;i++){
					b[i]=p[i%3]^a[i];
					if(isEN(b[i])==-1)break;
					fprintf(fp,"%c",b[i]);
				}
				fprintf(fp,"\n\n");
			}
		}
	}
	fclose(fp);
}