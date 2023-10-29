#include<stdio.h>
int main()
{
	int i,j,k,sum=0,r,c;
	printf("enter your row");
	scanf("%d",&r);
	printf("enter your column");
	scanf("%d",&c);
	int a[r][c],b[r][c],d[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(k=0;k<c;k++)
			{
					sum=sum+(a[i][k]*b[k][j]);
			}
		d[i][j]=sum;
		}	
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	
	
}