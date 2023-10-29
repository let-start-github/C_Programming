#include<stdio.h>
int main()
{
	int a;
	printf("ENTER YOUR NUMBER :");
	scanf("%d",&a);
	if(a>0)
	{
		printf("IT IS A POSITIVE INTEGER");
	}
    if(a<0)
    {
    	printf("IT IS A NEGATIVE INTEGER");
	}
	if(a==0)
	{
		printf("IT IS ZERO");
	}
}