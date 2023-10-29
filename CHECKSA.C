#include<stdio.h>
int main()
{ 
signed char a;

printf("ENTER YOUR LETTER");
scanf("%c",&a);
if(a>='0'&&a<='9')
{
	printf("IT IS A INTEGER");
}
else if(a>='a'&&a<='z'||a>='A'&&a<='Z')
{
	printf("IT IS A ALPHABET");
}
/*else if()
{
	printf("IT IS A UPPERCASE APHABET");
}
else if(a>='-1'&&a<='-9')
{
	printf("IT IS A NEGATIVE NUMBER");
}*/

else
{
	printf("IT IS A SPECIAL SYMBOL");
}
}