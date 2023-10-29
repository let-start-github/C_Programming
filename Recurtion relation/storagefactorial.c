#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("enter your number=");
	scanf("%d",&n);
	int f=fact(n);
	printf("factorial is = %d",f);
}
int fact(int n)
{
	static int mul=1;
	if(n==0)
	{
		return mul;
	}
	else
	{
		mul=mul*n;
		return fact(n-1);
	}
}