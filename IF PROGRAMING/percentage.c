#include<stdio.h>
int main()
{
	int A,B,C,D,E,F;
	printf("ODIA");
	scanf("%d",&A);
	printf("ENGLISH");
	scanf("%d",&B);
	printf("SANSKRIT");
	scanf("%d",&C);
	printf("MATH");
	scanf("%d",&D);
	printf("SCIENCE");
	scanf("%d",&E);
	printf("SOCIAL SCIENCE");
	scanf("%d",&F);
    float p=(A+B+C+D+E+F)/6;
    printf("YOUR PERCENTAGE IS : %f \n",p);
	if(p>=90&&p<=100)
	{
		printf("GRADE A1");
	}
	else if(p>=80&&p<=89)
	{
		printf("GRADE A2");
	}
	else if(p>=70&&p<=79)
	{
		printf("GRADE B1");
	}
	else if(p>=60&&p<=69)
	{
		printf("GRADE B2");
	}
	else if(p>=50&&p<=59)
	{
		printf("GRADE C");
	}
	else if(p>=40&&p<=49)
	{
		printf("GRADE D");
	}
	else
	{
		printf("fail");
	}
	
}