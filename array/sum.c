#include<stdio.h>
int main()
{
	int arr[5];
	int i,sum=0;
	printf("enter your 5 number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
}