#include<stdio.h>
void even()
{
	int a;
	printf("\nenter your number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("even number is= %d",a);
	}
}

void main()
{
	even();
	even();
	printf("nit");
	even();
}