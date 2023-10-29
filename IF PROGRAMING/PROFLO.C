#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	printf("ENTER YOUR CP=");
	scanf("%d",&cp);
	printf("ENTER YOUR SP=");
	scanf("%d",&sp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("%d PROFIT");
	}
	else if(cp>sp)
	{
		l=cp-sp;
		printf("%d LOSS");
	}
	else
	{
		printf("NO PROFIT NO LOSS");
	}
}