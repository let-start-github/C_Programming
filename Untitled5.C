#include<stdio.h>
main()
{
	char sujit;
	printf("ENTER THE CHARCTER");
	scanf("%c",&sujit);
	if((sujit>='a' && sujit<='z') || (sujit>='A' && sujit<='Z'))
	{
		printf("IT IS A ALPHABATE");
	}
	else
	{
		printf("IT IS NOT A ALPHABATE")
	}
}