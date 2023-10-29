#include<stdio.h>
main()
{
	int a,b,sum,sub,multi,devi;
	printf("enter the value");
	scanf("%d%d",&a,&b);
	char o;
	printf("enter your operator");
	scanf("%c",&o);
	switch(o)
	{
		case'+':
			sum=a+b;
			printf("sumaction=%d",sum);
			break;
			case'-':
				sub=a-b;
				printf("substraction=%d",sub);
				break;
				case'*':
					multi=a*b;
					printf("multification=%d",multi);
					break;
					case'/':
						devi=a/b;
						printf("devision=%d",devi);
						break;
						default:
							printf("enter the correct operator");
							break;
	}
}