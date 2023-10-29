#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter your number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
				printf("\n%d",i*j);

		}
	}
}