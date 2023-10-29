#include<stdio.h>
int main()
{
//	char name[5];
//	printf("enter your name: ");
//	gets(name);
//	scanf("%4s",name);
//	char name[] = {'a','r','u','\0'};
//	printf("your name is :");
//	printf("%s",name);
	char name[30];
	printf("enter your name : ");
	//scanf("%5s",name);
	gets(name);
//	printf("%10.5s",&name[2]);
	int count=strlen(name);
	printf("%d",count);
	//puts(name);
}