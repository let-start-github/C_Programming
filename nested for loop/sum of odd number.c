#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter your number");
	scanf("%d",&num);
	for(i=1;i<=num;i+=2)
	{
		sum=sum+i;
	}
				printf("sum of odd number %d",sum);
}