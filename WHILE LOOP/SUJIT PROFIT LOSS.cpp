#include<stdio.h>
int main()
{
	int cp,sp,s,k;
	printf("ENTER THE COST PRISE");
	scanf("%d",&cp);
	printf("ENTER THE SELLING PRICE");
	scanf("%d",&sp);
	if(sp>cp)
	{
		s=sp-cp;
		printf("%d PROFIT");
	}
	else if(cp>sp)
	{
		k=cp-sp;
		printf("%d LOSS");
	}
	else
	{
		printf("NO PROFIT NO LOSE");
	}
}