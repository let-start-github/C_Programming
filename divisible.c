#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("\ndivisible by 5");
	}
	else if(a%11==0)
	{
		printf("\ndivisible by 11");
	}
	else
	{
		printf("not divisible");
	}
}