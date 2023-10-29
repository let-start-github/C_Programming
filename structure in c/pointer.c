#include<stdio.h>
void add(int *x,int *y);
int main()
{
	int x=10;
	int y=20;
    add(&x,&y);
}
void add(int *a,int *b)
{
	int sum=0;
	sum=*a+*b;
	printf("%d",sum);
}