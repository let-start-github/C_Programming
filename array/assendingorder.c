#include<stdio.h>
int main()
{
	int i,j,temp,arr[5];
	printf("enter ypur element in array= ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
	   for(j=i+1;j<5;j++)
	   {
	   	if(arr[i]>arr[j])
	   	{
	   		temp=arr[i];
	   		arr[i]=arr[j];
	   		arr[j]=temp;
	    }
	   	
	   }	
	}
	printf("after shorting the accending value = \t");
	for(i=0;i<5;i++)
	{
		printf("%d \t",arr[i]);
	}
}