#include<stdio.h>
int main()
{
	int a,b,sum,module;
	char o;
	printf("enter your operator");
	scanf("%c",&o);
	printf("enter the value a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	switch(o)
	{
		case'+':
			sum=a+b;
			printf("sum=%d",sum);
			break;
			case'%':
				module=a%b;
				printf("module=%d",module);
				break;
				default:
					printf("enter your correct value");
					break;
	}
}