#include<stdio.h>
int main()
{
	int i=0,n,sum=0;
	printf("ENTER YOUR NUMBER FROM 0 TO ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d \n",i);
		sum+=i;
		i+=2;
	}
	printf("YOU SUM OF EVEN NUM IS :%d",sum);
}