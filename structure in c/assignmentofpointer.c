#include<stdio.h>
void main()
{
	int a=10,b=20;
	int *p,*q;
	p=&a;
	q=&b;
//	q=p;
//	*q=*p;
	printf("%d %d %d",b,*p,*q);
}