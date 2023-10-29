#include<stdio.h>
int rec(int);
main()
{
	int arr[5];
	printf("enter your values:");
	for(int i=0;i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}
	int s=rec();
}