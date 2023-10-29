#include<stdio.h>
int main()
{
	int arr1[5],arr2[5];
	int i;
	printf("enter your 5 number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
		arr2[i]=arr1[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr2[i]);
	}
}