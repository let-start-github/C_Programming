#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter your number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(num==2)
	{
		printf("primenumber");
	}
	else
	{
		printf("not a prime number");
	}
}