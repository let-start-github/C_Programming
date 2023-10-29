#include<stdio.h>
int main()
{
	int i,n,rem,sum=0;
	printf("enter your number");
	scanf("%d",&n);
	for(i=1;n>0;i++)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	
	printf("sum of digit is :%d",sum);
}