#include<stdio.h>
int main()
{
	int arr1[2][3],arr2[3][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d\t",&arr1[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",arr2[j][i]);
		}
		printf("\n");
	}
	
	
}