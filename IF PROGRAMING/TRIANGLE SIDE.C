#include<stdio.h>
int main()
{
	int A,B,C;
	printf("ENTER THE FIRST SIDE");
	scanf("%d",&A);
	printf("ENTER THE SECOND SIDE");
	scanf("%d",&B);
	printf("ENTER THE THIRD SIDE");
	scanf("%d",&C);
	if(A+B>C&&B+C>A&&C+A>B)
	{
		printf("TRIANGLE IS VALID");
	}
	else
	{
		printf("TRIANGLE IS NOT VALID");
	}
}