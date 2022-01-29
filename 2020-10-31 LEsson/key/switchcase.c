#include <stdio.h>
int main()
{
	int a=1,b=2,c=3;
	char flag;
	flag=b>=2&&c<=3;
	switch(a)
	{
	case 1:	switch(flag)
	{
			case 0:printf("**");break;
			case 1:printf("%%");break;
	}
	case 0:	switch(c)
	{
			case 1:printf("$$");break;
			case 2:printf("&&");break;
			default:printf("##");
	 }
	}
	printf("\n");
	while(1);
	return 0;
}
