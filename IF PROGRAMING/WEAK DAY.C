#include<stdio.h>
int main()
{
	int weak;
	printf("ENTER THE DAY NO");
	scanf("%d",&weak);
	if(weak==1)
	{
		printf("SUNDAY");
	}
	else if(weak==2)
	{
		printf("MONDAY");
	}
	else if(weak==3)
	{
		printf("TUESDAY");
	}
	else if(weak==4)
	{
		printf("WEDNESDAY");
	}
	else if(weak==5)
	{
		printf("THURSDAY");
	}
	else if(weak==6)
	{
		printf("FRIDAY");
	}
	else if(weak==7)
	{
		printf("SATURDAY");
	}
	else
	{
		printf("PLEASE ENTER VALID DAY NO");
	}
}