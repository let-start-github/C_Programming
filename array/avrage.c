#include<stdio.h>
int main()
{
	int arr[5];
	int i,j,r,sum=0;
	printf("enter your 5 number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<5;j++)
	{
		sum=sum+arr[j];
	}
//	printf("%d",sum);
	r=sum/5;
	printf("%d",r);
}