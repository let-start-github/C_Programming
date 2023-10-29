#include<stdio.h>
void prime();
int main()
{
prime();	
}
void prime()
{
	int i,num,count=0;
	printf("enter ypur number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
}