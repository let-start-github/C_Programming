#include<stdio.h>
int main()
{
	int month;
	printf("ENTER THE MONTH NUMBER");
	scanf("%d",&month);
	if(month==1)
	{
		printf("31 DAYS");
	}
	else if(month==2)
	{
		printf("28 OR 29 DAYS");
	}
	else if(month==3)
	{
		printf("31 DAYS");
	}
	else if(month==4)
	{
		printf("30 DAYS");
	}
	else if(month==5)
	{
		printf("31 DAYS");
	}
	else if(month==6)
	{
		printf("30 DAYS");
	}
	else if(month==7)
	{
		printf("31 DAYS");
	}
	else if(month==8)
	{
		printf("30 DAYS");
	}
	else if(month==9)
	{
		printf("31 DAYS");
	}
	else if(month==10)
	{
		printf("30 DAYS");
	}
	else if(month==11)
	{
		printf("31 DAYS");
	}
	else if(month==12)
	{
		printf("30 DAYS");
	}
	else
	{
		printf("PLEASE ENTER THE VALID MONTH NUMBER");
	}
}