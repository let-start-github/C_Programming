#include<stdio.h>
int main()
{
	int n,i,r=0,c=0,count=0;
	printf("enter your number:");
	scanf("%d",&n);
	int f=n;
	for(i=1;n>0;i++)
	{
		r=n%10;
		if(f%r==0)
		{
			count++;
		}
		n=n/10;
		c++;
	}
	if(count==c)
	printf("divisible");
	else
	printf("not");
}