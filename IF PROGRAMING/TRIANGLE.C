#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("ENTER YOUR FIRST ANGLE :");
	scanf("%d",&a);
	printf("ENTER YOUR SECOND ANGLE :");
	scanf("%d",&b);
	printf("ENTER YOUR THIRD ANGLE :");
	scanf("%d",&c);
	sum=a+b+c;
	if(sum<=180)
	/*{
		if(a==b==c)
		{
			printf("IT IS A  ")
		}
	}*/
	printf("IT IS A TRINGLE");
	else
	printf("IT IS NOT A TRINGLE");
}