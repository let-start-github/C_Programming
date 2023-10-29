#include<stdio.h>
main()
{
	char character;
	printf("enter character name");
	scanf("%c",&character);
	if(character>='a'&&character<='z')||(character>='A'&&character<='Z')
	{
		printf("character is an alphabate");
	}
	else
	{
		printf("character is not alphabate");
	}
}