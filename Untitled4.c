#include<stdio.h>
int main()
{
	int year;
	printf("\t                                 ENTER THE YEAR NO");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\t                              it is a leap year");
	}
	else if(year%4!=0)
	{
		printf("\t                             IT IS NOT A LEAP YEAR");
	}
	else
	{
		printf("\t                             please enetr the valid number");
	}
}