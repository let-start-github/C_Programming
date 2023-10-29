#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int x=10;
	int y=20;
	swap(&x,&y);
	printf("after swaping is x= %d",x);
	printf("after swaping is y= %d",y);
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;	
}