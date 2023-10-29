#include<stdio.h>
main()
{
	int v,aru[5]={10,20,30,40,50};
//	printf("enter your value:");
//	for(int i=0;i<=4;i++)
//	{
//		scanf("%d",&aru[i]);
//		
//	}
	printf("enter your number:");
	scanf("%d",&v);
	for(int j=0;j<=4;j++)
	{
		if(aru[j]==v)
		{
			printf("index no is=%d",j);
		}
	}
}
