#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3],mul;
	printf("enter the matrix a:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the matrix b:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the matrix a is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("the matrix b is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("the multiplication matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
    }
    
    
}
    
    
    
    
    
    
    
    
    
    
    