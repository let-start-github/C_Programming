#include<stdio.h>
main()
{
	int a,b,c,n,i;
	printf("enter your range : ");
	scanf("%d",&n);
	a=0;
	b=1;
	c=0;
	
	for(i=0;i<n;i++)
	{
	printf("f(%d) = %d\n",i,c);
	a=b;
	b=c;
	c=a+b;
	}
}