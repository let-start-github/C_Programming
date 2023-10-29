#include<stdio.h>
int main()
{
	int i,n,rem,rev=0;
	printf("enter your number");
	scanf("%d",&n);
	rem=n%10;
	for(i=1;n>10;i++)
	{
		
		
		n=n/10;
	}
	printf("first number is :%d",rem);
	printf("second number is :%d",n);
}