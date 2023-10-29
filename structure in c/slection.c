#include<stdio.h>
void main()
{
	int i,j,temp;
    int arr[4]={12,34,75,23,25};
    for(i=0;i<4;i++)
    {
    	for(j=i+1;j<4;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++){
		printf("%d,",arr[i]);
	}
}