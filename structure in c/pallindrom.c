#include<stdio.h>
int main()
{
	int i,num,rev=0,rem,f;
	f=num;
	printf("enter your number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(f==rev)
	{
		printf("it is a pallindrom");
	}
	else
	{
		printf("it is not a prime number");
	}
}