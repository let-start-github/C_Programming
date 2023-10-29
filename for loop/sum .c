#include<stdio.h>
int main()
{
	int i,num,sum=0;
	for(i=1;i<=3;i++)
	{
		printf("enter your number");
		scanf("%d",&num);
		if(num<0)
		{
			break;
		}
		sum=sum+num;
	}
	printf("sum is %d",sum);
}