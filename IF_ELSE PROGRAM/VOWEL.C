#include<stdio.h>
int main()
{
	char a;
	printf("ENTER YOUR ALPHABET");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("IT IS A LOWERCASE VOWEL");
	}
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("IT IS A UPPERCASE VOWEL");
	}
	else
	{
		printf("IT IS NOT VOWEL");
	}
}