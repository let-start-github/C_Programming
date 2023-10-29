#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	a=sum(a);
	printf("%d",a);
}
int sum(int x)
{
	int s=0;
	if(x<=1)
	return x;
	s=x+sum(x-1);
}