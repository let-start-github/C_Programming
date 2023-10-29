#include<stdio.h>
main()
{
	char character;
	printf("enter the character");
		scanf("%c",&character);
	if(character>='a'&&character<='z'||character>='A'&&character<='Z')
	{
		printf("it is an alphabate");
	}
	else
	{
		printf("it is not alphabate");
	}
	
}