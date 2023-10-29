#include<stdio.h>
int main()
{
	int a;
	printf("ENTER THE VALUE");
	scanf("%d",&a);
	if(a>0)
	{
		printf("IT IS A POSITIVE NUMBER");
	}
	else if(a<0)
	{
		printf("IT IS A NEGETIVE NUMBER");
	}
	else if(a==0)
	{
		printf("ZERO NUMBER");
	}
}