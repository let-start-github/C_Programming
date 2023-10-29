#include<stdio.h>
int main()
{
	int i=0,n;
	printf("ENTER YOUR NUMBER");
	scanf("%d",&n);
	while(n>0)
	{
		n/=10;
		i++;
	}
	printf("TOTAL DIGIT IS : %d",i);
}