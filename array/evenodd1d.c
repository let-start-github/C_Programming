#include<stdio.h>
int main()
{
	int arr1[5];
	int i,e=0,o=0;
	printf("enter your 5 number");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
	if(arr1[i]%2==0)
	   {
	   	e++;
	
	   }
	else if(arr1[i]%2==1)
	   {
	   	o++;
	
	   }
	}
	printf("even number=%d",e);
	printf("odd number=%d",o);

	
}