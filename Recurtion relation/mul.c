#include<stdio.h>
int main()
{
	int a,b;
	printf("enter your number");
	scanf("%d %d",&a,&b);
	a=mul(a,b);
	printf("%d",a,b);
}
int mul(int x)
{
	int s;
	s=x*mul(x);
	//printf("%d",s);
}