#include<stdio.h>
int main()
{
	int i,r,m=0,n;
	printf("enter your number");
	scanf("%d",&n);

	for(i=1;n>0;i++)
	{
		r=n%10;
		m=m*10+r;
		n/=10;
	}
	printf("after swap number is %d",m);
//	if(m==j)
//	{
//		printf("palindrome");
//	}
//	else
//	{
//		printf("not palindrome");
//	}
}