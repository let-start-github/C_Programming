#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	puts("enter your word");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str2,str1) == 0)
	{
		printf("it is a pallindrome string");
	}
	else {
		printf("it is a not pallindrome");
	}
	
}