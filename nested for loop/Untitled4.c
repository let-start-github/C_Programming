#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter your number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	n=n/10;
	count++;
}
printf("count number is %d",i);
}