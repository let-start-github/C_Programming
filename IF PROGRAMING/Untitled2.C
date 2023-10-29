#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE THREE VALUE");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c) && (b+c>a) && (c+a>b))
	{
		printf("TRIANGLE IS VALID");
	}
	else
	{
		printf("TRIANGLE IS NOT VALID");
	}
}