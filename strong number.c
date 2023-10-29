#include<stdio.h>
int main()
{
	int i,j,num,f,rem,sum=0,mul;
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
		num=num/10;
	}
	if(f=sum)
	{
		printf("strong number is :%d",f);
	}
	else
	{
		printf("not a strong number :%d",f);
	}
}