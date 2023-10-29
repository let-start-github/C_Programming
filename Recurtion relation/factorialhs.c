#include<stdio.h>
void factorial();
main()
{
	factorial();
}
void factorial()
{ 
	int i,n,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}

