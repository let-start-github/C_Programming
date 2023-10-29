#include<stdio.h>
int main()
{
	int x=11,y=10;
	y=x++ - --x;
	x=--y - y++;
	printf("%d %d",x,y);
}