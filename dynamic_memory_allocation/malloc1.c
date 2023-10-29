#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr,i;
	ptr=(int *)malloc(3*sizeof(int));
	for(i=0;i<3;i++)
	{
		scanf("%d",ptr+i);
	
	}
	for(i=0;i<3;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}