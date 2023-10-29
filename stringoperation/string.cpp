#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[50]={"ABCD"};
	char arr2[50]={"CCAD"};
	int i,j,count;
//	int l=;
	for(i=0;i<strlen(arr1);i++)
	{
		count=0;
		for(j=0;j<strlen(arr2);j++)
		{
			if(arr1[i]==arr2[j])
			{
				printf("%c string in found on index %d\n",arr1[i],j);
				count++;
			}
			
		}
		if(count==0) 
		{
			printf("%c string in not found\n",arr1[i]);
		}
	}
}