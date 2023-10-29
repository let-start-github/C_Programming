#include<stdio.h>
int main()
{
	int num;
	printf("ENTER THE NUMBER");
	scanf("%d",&num);
	switch(num%2)
	{
	case 0:
		printf("IT IS EVEN NUMBER");
		break;
		
	default:
		printf("IT IS ODD NUMBER");
		
	}
}