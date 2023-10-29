#include<stdio.h>

#include<stdlib.h>
main()
{
	char * ptr;
	int n,i;
	printf("enter your size : ");
	scanf("%d",&n);
	ptr=(char *)malloc(n*sizeof(char));
	if(ptr==NULL)
	{
		printf("allocate failed !!!\n");
	}
	else
	{
		printf("alocate succesfull \n");
	}
	printf("enter your name  : ");
	for(i=0;i<n;i++)
	{
		scanf("%s",ptr+i);
		
	}
	for(i=0;i<n;i++)
	{
	puts(ptr+i);
	printf("\n");
	}
}