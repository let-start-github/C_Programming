#include<stdio.h>
void factorial();
int main()
{
	factorial();
	factorial();
	factorial();
}
 void factorial()
{
	int i,n,mul=1;
	printf("enter your number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		mul=mul*i;
	
	}
	printf("%d \n",mul);
}