#include<stdio.h>
int main()
{
	int a=24,b=28;
	printf("%d",a>20||a<30);
	printf("\n%d",a>26&&a<28);
	printf("\n%d",!(a<26&&b<30));
	printf("\n%d",a<23^b<24);
}