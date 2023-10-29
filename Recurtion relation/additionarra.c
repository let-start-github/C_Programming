#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("enter your row");
	scanf("%d",&r);
	printf("enter your column");
	scanf("%d",&c);
	int twod[r][c],twoc[r][c],sum[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&twod[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&twoc[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
    		{
				sum[i][j]=twod[i][j]+twoc[i][j];
			}
			
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
    		{
				printf("%d\t",sum[i][j]);
			}
			printf("\n");
	}
	
	
}