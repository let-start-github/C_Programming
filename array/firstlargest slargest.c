#include<stdio.h>
int main()
{
	int arr[5];
	int i,largest,slargest;
	printf("enter your 5 number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	for(i=0;i<5;i++)
	{
		if(largest<arr[i])
		{
			slargest=largest;
			largest=arr[i];
		}
		else if(slargest<arr[i])
		{
			slargest=arr[i];
		}
	}
	printf("largest is :%d",largest);
	printf("second largest is :%d",slargest);
}