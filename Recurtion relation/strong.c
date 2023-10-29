#include<stdio.h>
void strong();
int main()
{
	strong();
}
void strong()
{
	int i,num,j,mul,f,sum=0,rem;
	printf("enter your number");
	scanf("%d",&num);
	f=num;
	for(i=1;num>0;i++)
	{
		rem=num%10;
		mul=1;
		for(j=1;j<=rem;j++)
		{
			mul=mul*j;
		}
		sum=sum+mul;
		num=num/10;;
	}
	if(f=sum)
	{
		printf("strong number is=%d",f);
	}
	else
	{
		printf("not strong number is =%d",f);
	}
}