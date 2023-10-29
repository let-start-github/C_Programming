#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("ENTER ONE SIDES :");
	scanf("%d",&a);
	printf("ENTER SECOND SIDES");
	scanf("%d",&b);
	printf("ENTER THIRD SIDES");
	scanf("%d",&c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
		printf("TRIANGLE IS VALID \n");
		if(a==b==c)
		{
			printf("IT IS A EQUILATERAL TRIANGLE");
		}
		else if(a==b||b==c||c==a)
		{
			printf("IT IS A ISOSCALES TRIANGLE");
		}
		else
		{
		printf("IT A SCALEN TRIANGLE");
		}
	}
	else 
	{
		printf("TRIANGLE IS NOT VALID");
	}
}