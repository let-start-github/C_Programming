#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter the first value");
	scanf("%d",&a);
	printf("enter the second value");
	scanf("%d",&b);
	printf("enter the third value");
	scanf("%d",&c);
	sum=a+b+c;
	if(sum==180 && a>0 && b>0 && c>0)
	{
		printf("TRIANGLE IS VALID");
	}
	else
	{
		printf("TRIANGLE IS NOT VALID");
	}
}