#include<stdio.h>
int main()
{
	int num,rem,rev=0,f;
	printf("enter your number");
	scanf("%d",&num);
	f=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(f==rev)
	{
		printf("it is a pellindrom");
	}
	else
	{
		printf("it is not a pelindrom");
	}
}