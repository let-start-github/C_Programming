#include<stdio.h>
main()
{
	int no,i,fact=1;
	printf("enter your number");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("factorial is %d",fact);
}
void fact()
{
fact();
fact();
}
