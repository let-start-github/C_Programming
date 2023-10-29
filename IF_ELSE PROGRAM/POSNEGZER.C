#include<stdio.h>
int main()
{
	int a;
	printf("ENTER YOUR NUMBER :");
	scanf("%d",&a);
	if(a>0)
	{
		printf("IT IS A POSITIVE NUMBER");
	}
    if(a<0)
    {
    	printf("IT IS A NEGATIVE NUMBER");
	}
	if(a==0)
	{
		printf("IT IS ZERO");
	}
}