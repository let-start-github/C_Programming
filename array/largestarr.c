#include<stdio.h>
main()
{
	int arr[5]={10,13,26,22,4};
	int l=arr[4],i=0,sl=0;
	for(i=0;i<5;i++)
	{
		if(l<arr[i])
		{
			sl=l;
			l=arr[i];
		}
		else if(sl<arr[i])
		{
			sl=arr[i];
		}
	}
	printf("largest number is : %d",l);
		printf("second largest number is : %d",sl);
}