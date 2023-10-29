#include<stdio.h>
main()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is largest");
	}
	else if(b>a)
	{
		printf(" b is largest");
	
	}
	else 
	{
	printf("both are same");
	}
	if(a==0)
	{
		printf("zero value");
	}
}