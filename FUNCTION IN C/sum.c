#include<stdio.h>
void sum();
main()
{
sum();	
}
void sum()
{
	int a,b,sum;
	printf("enter your two number");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}