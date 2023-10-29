#include<stdio.h>
int main()
{
	
	int i,j,k,sum=0;
	int a[2][2],b[2][2],c[2][2];
	printf("enter your 3 number");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
		sum=0;
		for(k=0;k<2;k++)
		{
			sum=sum+(a[i][k]*b[k][j]);
		}
		c[i][j]=sum;
		
	}
	
}
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&c[i][j]);
		}
		
	}
	
}