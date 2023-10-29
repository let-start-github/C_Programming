#include<stdio.h>
void su(int);
int main()
{
	int n,s;
	printf("enter your range");
	scanf("%d",&n);
	su(n);
//	printf("sum=%d",s);
}
void su(int x)
{
	int sum=0;
	if(x==0)
	{
			printf("sum=%d",x);
	return 0;
	}

	else
	{
		return x+su(x-1);
		
		
	}
	

}