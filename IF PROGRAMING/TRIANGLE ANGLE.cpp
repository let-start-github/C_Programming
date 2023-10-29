#include<stdio.h>
int main()
{
	int A,B,C,SUM;
	printf("ENTER THE FIRST ANGLE");
	scanf("%d",&A);
	printf("ENTER THE SECOND ANGLE ");
	scanf("%d",&B);
	printf("ENTER THE THIRD ANGLE");
	scanf("%d",&C);
	sum=A+B+C;
	if(sum==180 && A>0 && B>0 && C>0)
	{
		printf("TRIANGLE IS VALID");
	}
	else
	{
		printf("TRIANGLE IS NOT VALID");
	}
}