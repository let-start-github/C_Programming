#include<stdio.h>
main()
{
	int i,sum=0,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+i;	
	}
	printf("%d",sum);
	}