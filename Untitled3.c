#include<stdio.h>
int main()
{
	int sujit;
	printf("ENTER THE NUMBER");
	scanf("%d",&sujit);
	if(sujit%2==0)
	{
		printf("IT IS A EVEN NUMBER");
	}
	else if(sujit%2!=0)
	{
		printf("IT IS ODD NUMBER");
	}
	else
	{
		printf("enter the valid number");
	}
}