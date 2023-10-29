#include<stdio.h>
void display();
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		display();
	}
}
void display()
{
	static int x=5;
	static int y=5;
	x++;
	y++;
	printf("\n x=%d",x);
	printf("\n y=%d",y);
}