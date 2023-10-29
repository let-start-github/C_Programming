#include<stdio.h>
int main()
{
	int i,a[5];
	printf("enter your five integer :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display integer :");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
}