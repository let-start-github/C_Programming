#include<stdio.h>
int main()
{
	int i,j,n,sum=0,mul,f,r;
	printf("enter your number :");
	scanf("%d",&n);
	f=n;
	for(i=1;n>0;i++)
	{
		r=n%10;
		mul=1;
		for(j=1;j<=r;j++)
		{
			mul=mul*j;
		}
		sum=sum+mul;
		n/=10;
	}
	if(f==sum)
	printf("%d is a strong number",f);
	else 
	printf("%d is not a strong number",f);
}