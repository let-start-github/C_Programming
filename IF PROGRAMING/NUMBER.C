#include<stdio.h>
main()
{
	char number;
	printf("enter the number");
	scanf("%c",&number);
	if(number>='0'&&number<='9')
	{
		printf("it is an intiger");
	}
	else
	{
		printf("it is not an intiger");
	}
}