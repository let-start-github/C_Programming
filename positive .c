#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is positive number");
	}
	else if(a<0)
	{
		printf("a is negetive number");
	}
	else if(a==0)
	{
		printf("a is zero number");
	}
}