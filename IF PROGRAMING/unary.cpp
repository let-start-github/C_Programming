#include<stdio.h>
int main()
{
	int x,y;
	y=x-- - --x;
	x=--y - y--;
	printf("%d %d",x,y);
}