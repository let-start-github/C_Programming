#include<stdio.h>
int main()
{
	int i,j,n,f,sum=0,k,p,r,count=0;
	printf("enter your number :");
	scanf("%d",&n);
	f=n;

	
	for(i=1;n>0;i++)
	{
		n/=10;
		count++;
	}
	n=f;
	for(k=1;n>0;k++)
	{
	r=n%10;
	p=1;
	for(j=1;j<=count;j++)
	{
		p=p*r;
	}
	sum=sum+p;
	n/=10;
	}
	if(sum==f)
	printf("%d is a amstrong number",f);
	else
	printf("%d is not a amstrong number",f);
}