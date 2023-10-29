#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr;
	int n,i;
	printf("enter your total value");
	scanf("%d",&n);
	ptr=(char*)malloc(n*sizeof(char));
    if(ptr==NULL)
    {
    	printf("allocation failed!!!\n");
	}
	else
	{
		printf("allocation sussecfull...\n");
	}
	printf("enter your name...");
	for(i=0;i<n;i++)
	{
		scanf("%c",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%c",*(ptr+i));
	}
}