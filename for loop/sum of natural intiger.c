#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter your number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("\n%d",i);
	}
	printf("\n T0tal sum is: %d",sum);
}