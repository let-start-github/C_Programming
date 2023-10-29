#include<stdio.h>
int main()
{
	int A,B,C;
	printf("ENTER THE FIRST VALUE");
	scanf("%d",&A);
	printf("ENTER THE SECOND VALUE");
	scanf("%d",&B);
	printf("ENTER THE THIRD VALUE");
	scanf("%d",&C);
	if((A==B) && (B==C))
	{
		printf("EQUILATERAL TRIANGLE");
	}
	else if((A==B)||(A==C)||(B==C))
	{
		printf("ISOSCELES TRIANGLE");
	}
	else
	{
		printf("SCALENE TRIANGLE");
	}
}