#include<stdio.h>
int main()
{
	int num;
	printf("enter your number");
	scanf("%d",&num);
	switch(num>0)
	{
		case 1:
			{
				printf("it is positive number");
				break;
		case 0:
			}
			switch(num<0)
			{
			case 1:
				printf("it is a negetive number");
				break:
			case 0:
				printf("it is a zero number");
			}
	}
}