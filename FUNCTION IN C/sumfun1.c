#include<stdio.h>
void sujit();
main()
{
	sujit();
		sujit();
			sujit();
				sujit();
}
sujit()
{
	int a,b,sum;
	printf("enter your two number");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d\n",sum);
}