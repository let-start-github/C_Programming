#include<stdio.h>
int main()
{
	int i,num,rem=0;
	printf("enter your number");
	scanf("%d",&num);
			rem=num%10;

		while(num>10)
		{
			num=num/10;	
		}
	
		printf("\nfirst digit is: %d",num);
		printf("\nlast digit is : %d",rem);
}