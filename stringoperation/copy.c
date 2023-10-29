#include<stdio.h>
#include<string.h>
int main()
{
	char name[23],name2[24];
	printf("enter your string");
	gets(name);
	strcpy(name2,name);
	puts(name2);
}