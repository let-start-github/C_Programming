#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE TWO NUMBER...");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is largest");
	}
	if(b>a)
	{
		printf("b is largest");
	}
}