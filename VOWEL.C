#include<stdio.h>
int main()
{
	char a;
	printf("ENTER YOUR ALPHABET \n");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("IT IS A LOWERCASE VOWEL");
	}
	else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("IT IS A UPPERCASE VOWEL");
	}
	else if(a>'a'&&a<='z')
	{
		printf("it is a lowercase consonant");
	}
	else if(a>'A'&&a<='Z')
	{
		printf("it is a uppercase consonant");
	}
	else
	{
		printf("enter valid alphabet");
	}
}