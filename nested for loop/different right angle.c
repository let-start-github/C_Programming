#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter your number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=i;j<num;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++);
		{
			if(i==num || j==1 || j==i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}