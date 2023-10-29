#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("a is maximum");
	}
	if((b>c)&&(b>a))
	{
		printf("b is maximum");
	}
	if((c>b)&&(c>a))
	{
		printf("c is maximum");
	}
}