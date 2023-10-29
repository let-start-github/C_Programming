#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr;
	printf("enter total no of value");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	
	printf("\n enter the values :");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}


	printf("\n entered the values are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	
	free(ptr);
}