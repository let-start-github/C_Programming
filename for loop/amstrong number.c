#include<stdio.h>
int main()
{
	int num,f,rem,arm=0;
	printf("enter your number");
	scanf("%d",&num);
	num=f;
	while(num>0)
	{
		rem=num%10;
		arm=(rem*rem*rem)+arm;
		num=num/10;
	}
	if(f==arm)
	{
		printf("is amstrong");
	}
	else
	{
	printf("is not amstrong");	
	}
}