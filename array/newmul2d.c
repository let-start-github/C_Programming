#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2],sum=0;
	int i,j,k;
	printf("first matrix=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&arr1[i][j]);
		}
	}
	printf("second matrix=");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("multiply matrix=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
			{
				sum=sum+(arr1[i][k] * arr2[k][j]);
			}
			arr3[i][j]=sum;
		
	}
} 
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d\t",arr3[i][j]);
	}
	printf("\n");
}
}

	