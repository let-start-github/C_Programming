#include<stdio.h>
int main()
{ 
char a;

printf("ENTER YOUR LETTER");
scanf("%c",&a);
if(a>='a'&&a<='z')
{
	printf("IT IS A LOWERCASE ALPHABET");
}
if(a>='A'&&a<='Z')
{
	printf("IT IS A UPPERCASE APHABET");
}
if(a>='~'&&a<='?')
{
	printf("IT IS A SPECIAL SYMBOL");
}
if(a>='0'&&a<='9')
{
	printf("IT IS A POSITIVE INTEGER");
}

}