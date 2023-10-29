#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE FIRST NUMBER");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER");
	scanf("%d",&b);
	switch(a>b)
	{
		case 1:
			printf("A is largest",b);
			break;
		case 0:
		printf("b is largest");
		break;
		default:
		
		printf("BOTH ARE SAME");
	}
	
}