#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,result=0;
	printf("enter the value of a,b");
	scanf("%d %d",&a,&b);
	*p=&add;
	result=*p(a,b);
	printf("%d",result);
}
int add(int x,int y)
{
	int sum=x+y;
	return sum;
}