#include<stdio.h>
int main()
{
	int a,b,c,o,sum,sub,mul;
	float div;
	char op;
	printf("\t                                    WELCOME TO MY CALCULATOR \n");
	printf("ENTER YOUR OPERAND NUMBER :");
	scanf("%d",&o);
	
	
	
	switch(o)
	{
		case 2:scanf("%d %c %d",&a,&op,&b);
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
	    	case'/':
			div=a/b;
			printf("DIV= %f",div);
			break;
			case'*':
			mul=a*b;
			printf("MUL= %d",mul);
			break;
		default:
			printf("ENTER VALID OPERATOR");
			}
		case 3:scanf("%d %c %d %c %d",&a,&op,&b,&op,&c);
			switch(op)
			{
			case'+':
			sum=a+b+c;
			printf("SUM= %d",sum);
			break;
	      	case'-':
		    sub=a-b-c;
			printf("SUB= %d",sub);
			break;
	    	case'/':
			div=a/b/c;
			printf("DIV= %f",div);
			break;
			case'*':
			mul=a*b*c;
			printf("MUL= %d",mul);
			break;
		default:
			printf("ENTER VALID OPERATOR");
			}
	}
	
}