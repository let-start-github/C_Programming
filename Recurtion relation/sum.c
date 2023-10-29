#include<stdio.h>
int sum(int);
int main()
{
	int no,s=0;
	if(no==1)

	s=no+sum(no-1);
}

int sum(int no)
{
	
	printf("enter your number");
	scanf("%d",&no);
	no=sum(no);
	printf("%d",no);
}
