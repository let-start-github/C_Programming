#include<stdio.h>
int main()
{
	int i,num,f,rem,p,sum=0,count=0;
	printf("enter your number");
	scanf("%d",&num);
	f=num;
	for(i=1;num>0;i++)
	{
		num=num/10;
		count++;
	}
	num=f;
	for(i=1;num>0;i++)
	{
		rem=num%10;
		p=1;
	
	for(i=1;i<=count;i++)
	{
		p=p*rem;


	}
		sum=sum+p;
			num=num/10;
}
if(sum==f)
{
	printf("amstrong");
}
else
{
	printf("not a anstrong");
}
	
}