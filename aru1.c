#include<stdio.h>
main()
{
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	/*printf("enter third number");
	scanf("%d",&c);*/
	if(a>b)
	{
		printf("largest number is %d",a);
	}
	if(b>a)
	{
		printf("largest number is %d",b);
	}
}
