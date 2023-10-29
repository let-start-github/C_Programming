#include<stdio.h>
main()
{
	char v;
	printf("ENTER THE CHARACTER");
	scanf("%c",&v);
	if(v>='A'&&v<='Z')
	{
		printf("it is a UPPER CASE ALPHABATE");
	}
	else if(v>='a'&&v<='z')
	{
		printf("it is a LOWER CASE ALPHABATE");
	}
	else
	{
		printf("it is not a letter");
	}
}