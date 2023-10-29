#include<stdio.h>
int main()
{
	int a,b,sum,sub;
	char op;
	printf("ENTER YOUR OPERATOR");
	scanf("%c",&op);
	printf("ENTER YOUR FIRST NUMBER :");
	scanf("%d",&a);
	printf("ENTER YOUR SECOND NUMBER :");
	scanf("%d",&b);
	
	switch(op)
	{
		case'+':
			sum=a+b;
			printf("SUM= %d",sum);
			break;
		case'-':
		    sub=a-b;
			printf("SUB= %d",sub);
			break;
		default:
			printf("ENTER VALID OPERATOR");	
	}
	
}