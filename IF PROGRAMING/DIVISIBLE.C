#include<stdio.h>
main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if(a%5==0&&a%11==0)
	{
	printf("divisible by 5 and 11");
	}
	else
	{
		printf("not divisible by 5 and 11");
	}
	
	
}