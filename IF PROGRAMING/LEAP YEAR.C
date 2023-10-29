#include<stdio.h>
main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
	}
	if(year%4!=0)
	{
		printf("common year");
	}
}