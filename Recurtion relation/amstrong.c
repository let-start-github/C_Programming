#include<stdio.h>
void amstrong();
int main()
{
	amstrong();
}
void amstrong()
{
	int i=1,n,c,sum=0,p,count=0,j,rem;
	printf("enter your number");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	n=c;
	while(n>0)
	{
		p=1;
		rem=n%10;
		j=1;
		while(j<=count)
		{
			p=p*rem;
			j++;
		}
		n=n/10;
		sum=sum+p;
	}
	if(c==sum)
	{
		printf("it is a amstrong");
	}
	else
	{
		printf("it is not a amstrong");
	}
}
