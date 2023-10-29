#include<stdio.h>
int main()
{
	float a,b,c,sum,sub,mul,div;
	printf("ENTER YOUR FIRST NUMBER :");
	scanf("%d",&a);
	printf("ENTER YOUR SECOND NUMBER :");
	scanf("%d",&b);
	printf("ENTER YOUR OPERATOR :");
	scanf("%d",c);
	if(c=='+')
	{
		sum=a+b;
		printf("ADDTION OF TWO NUMBER IS : %d",sum);
	}
	else if(c=='-')
	{
		sub=a-b;
		printf("SUBSTRACTION OF TWO NUMBER IS : %d",sub);
	}
	else if(c=='*')
	{
		mul=a*b;
		printf("MULTIPLICATION OF TWO NUMBER IS : %d",mul);
	}
	else if(c=='/')
	{
		div=a/b;
		printf("DIVISION OF TWO NUMBER IS : %d",div);
	}
	else
	{
		printf("ENTER VALID OPERATOR");
	}
}