#include<stdio.h>
void add(int,int);
int main()
{
	int a,b,sum;
	printf("enter your two number");
	scanf("%d %d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int s;
	s=a+b;
	printf("sum is %d",s);
}