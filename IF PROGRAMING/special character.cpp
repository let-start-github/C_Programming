#include<stdio.h>
main()
{
	char s;
	printf("ENTER THE VALUE");
	scanf("%c",&s);
	if(s>='a'&&s<='z'||s>='A'&&s<='Z')
	{
		printf("it is alphabate");
	}
	else if(s>='0'&&s<='9')
	{
		printf("it is a digit");
	}
	else
	{
		printf("it is a special character");
	}
}