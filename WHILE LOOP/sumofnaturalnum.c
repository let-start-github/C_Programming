#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("PRINT NATURAL NUMBER FROM 1 TO ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d \n",i);
		sum+=i;
		i++;
	
	}
		printf("SUM OF ALL NATURAL NUM IS : %d",sum);

	
}