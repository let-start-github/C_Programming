#include<stdio.h>
int main()
{
	int i,num,pos,size,arr[10];
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the position");
	scanf("%d",&pos);
	for(i=size-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=num;
	for(i=0;i<=size;i++)
	{
		printf("%d",arr[i]);
	}
	
	size++;
}