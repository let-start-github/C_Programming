#include<stdio.h>
int prime(int,int);
int main()
{
	int n;
	printf("enter your number");
	scanf("%d",&n);
	int g=prime(n,n/2);
	if(g==1)
	printf("prime is=%d",n);
	else
	printf("not prime is=%d",n);
}
int prime(int v,int i)
{
	if(i==1)
	return 1;
	else if(v%i==0)
	return 0;
	else
	return prime(v,i-1);
}