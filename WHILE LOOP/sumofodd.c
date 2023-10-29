#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("ENTER YOUR NUMBER FROM 1 TO ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d \n",i);
		sum+=i;
		i+=2;
	}
	printf("YOUR SUM IS: %d",sum);
}