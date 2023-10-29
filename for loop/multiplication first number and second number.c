#include<stdio.h>
int main()
{
	int i,num,rem=0,mul=1;
	printf("enter your number");
	scanf("%d",&num);
	rem=num%10;
	for(i=1;num>10;i++)
	{
		num=num/10;
	}
	mul=num*rem;
	printf("mul is :%d",mul);
	
}