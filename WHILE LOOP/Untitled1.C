#include<stdio.h>
int main()
{
	int a,b;
	printf("\t                            ENTER THE FIRST NUMBER");
	scanf("%d",&a);
	printf("\t                           ENTER THE SECOND NUMBER");
	scanf("%d",&b);
	if(a>b)
	{
		printf("A IS LARGEST");
	}
	else if(b>a)
	{
		printf("B IS LARGEST");
	}
	else if(a==b)
	{
		printf("A AND B ARE SAME");
	}
	else
	{
		printf("NOT AVAILABLE");
	}
}