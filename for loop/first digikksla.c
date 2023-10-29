#include<stdio.h>
int main()
{
	int num,rem=0;
	printf("enter your number");
	scanf("%d",&num);
//	i=1;
	rem=num%10;
	while(num>10)
	{
		num=num/10;
	}
	printf("\nfirst number is :%d",rem);
	printf("\nlast number is :%d",num);
}