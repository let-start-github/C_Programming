#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER YOUR FIRST NUMBER :");
	scanf("%d",&a);
		printf("ENTER YOUR SECOND NUMBER :");
		scanf("%d",&b);
		printf("ENTER YOUR THIRD NUMBER :");
		scanf("%d",&c);
		if (a>b&&a>c)
		{
			printf("YOUR LARGEST NUMBER IS : %d",a);
		
		}
		if (b>a&&b>c)
		{
			
			printf("YOUR LARGEST NUMBER IS : %d",b);
		}
		if (c>a&&c>b)
		{
			printf("YOUR LARGEST NUMBER IS : %d",c);
		}
		

	
}