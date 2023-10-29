#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("enter your row");
	scanf("%d",&r);
	printf("enter your column");
	scanf("%d",&c);
	int twod[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&twod[i][j]);
		}
	}
	printf("array matrix is :\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
    	{
		printf("%d\t",twod[i][j]);
		}
		printf("\n");	
	}
	printf("transpose of matrix is:\n");
	for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
    	{
		printf("%d\t",twod[j][i]);
		}
		printf("\n");	
	}
	
	
}