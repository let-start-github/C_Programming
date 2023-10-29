#include<stdio.h>
int pow(int,int);
main()
{
	int b,e;
	printf("enter your base:");
	scanf("%d",&b);
	printf("enter your exponent");
	scanf("%d",&e);
	int p=pow(b,e);
	printf("value= %d",p);
}
int pow(int b,int e)
{
	if(e==0)
	return 1;
	else 
	return b*pow(b,e-1);
}