#include<stdio.h>
int main()
{
	int cp,sp,s,k;
	printf("\t                       ENTER THE COST PRISE...");
	scanf("%d",&cp);
	printf("\t                    ENTER THE SELLING PRICE...");
	scanf("%d",&sp);
	if(sp>cp)
	{
		s=sp-cp;
		printf("\t                             %d PROFIT");
	}
	else if(cp>sp)
	{
		k=cp-sp;
		printf("\t                             %d LOSS");
	}
	else
	{
		printf("\t                    NO PROFIT NO LOSE");
	}
}