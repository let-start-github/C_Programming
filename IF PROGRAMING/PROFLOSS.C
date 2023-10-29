#include<stdio.h>
int main()
{
	int sp,cp;
	printf("ENTER YOUR SELLING PRICE");
	scanf("%d",&sp);
	printf("ENTER YOUR COST PRICE");
	scanf("%d",&cp);
	if(sp>cp)
	{
		printf("PROFIT %d",sp-cp);
	}
	else if(cp>sp)
	{
	printf("LOSS %d",cp-sp);
}
else
{
	printf("NO LOSS NO PROFIT");
}
}