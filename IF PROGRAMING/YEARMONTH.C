#include<stdio.h>
int main()
{
	int m,y;
	printf("ENTER YOUR YEAR");
	scanf("%d",&y);
	printf("ENTER MONTH NUMBER");
	scanf("%d",&m);
	
	if (m==1)
	
		printf("JANUARY MONTH IT CONTAINS 31 DAYS");
	
	else if (m==2)
	{
		if(y%4==0)
		{
			printf("FEB MONTH IT CONTAINS 29 DAYS");
		}
		else
		{
			printf("FEB MONTH IT CONTAINS 28 DAYS");
		}
	}
	
	
	
	else if (m==3)
	
		printf("MARCH MONTH IT CONTAINS 31 DAYS");
	
	else if (m==4)
	
		printf("APRIL MONTH IT CONTAINS 30 DAYS");
	
	else if (m==5)
	
		printf("MAY MONTH IT CONTAINS 31 DAYS");
	
	else if (m==6)
	{
		printf("JUNE MONTH IT CONTAINS 30 DAYS");
	}
	else if (m==7)
	{
		printf("JULY MONTH IT CONTAINS 31 DAYS");
	}
	else if (m==8)
	{
		printf("AUGUST MONTH IT CONTAINS 31 DAYS");
	}
	else if (m==9)
	{
		printf("SEPTEMBER MONTH IT CONTAINS 30 DAYS");
	}
	else if (m==10)
	{
		printf("OCTOBER MONTH IT CONTAINS 31 DAYS");
	}
	else if (m==11)
	{
		printf("NOVEMBER MONTH IT CONTAINS 30 DAYS");
	}
	else if (m==12)
	{
		printf("DECEMBER MONTH IT CONTAINS 31 DAYS");
	}
}