#include<stdio.h>
int fun(int n);
int main()
{
	int i;
	for(i=1;i<=5;i++)
		printf("%d != %d\n",i,fun(i));
	return 0;
 } 
int fun(int n)
{
	static int f = 1;
	f= f*n;
	return f;
	
}
