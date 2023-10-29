#include<stdio.h>
int main()
{
	int a;
	printf("ENTER THE VALUE");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("DIVISIBLE BY 5 AND 11");
	}
	else if(a%5!=0 && a%11!=0)
	{
		printf("NOT DIVISIBLE BY 5 AND 11");
	}
	else
	{
		printf("ENTER THE VALID NUMBER");
	}
}