#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==1)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	 }
	 printf("\n Total number of even number %d",sum);
}