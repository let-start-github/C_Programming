#include<stdio.h>
int main()
{
	int number;
	printf("ENTER THE NUMBER");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("IT IS A EVEN NUMBER");
	}
	else if(number%2!=0)
	{
		printf("IT IS A ODD NUMBER");
	}
	else
	{
		printf("ENTER THE VALID NUMBER");
	}
}