#include<stdio.h>
static char ch;
void display();
void main()
{
	display();
	display();
  
	printf("\n ch=%c",ch);
}
void display()
{
	static int x=0;
	x+=10;
	static int y;
	y=10;
	y--;
	//char ch=("sujit");
	
	printf("\n x=%d",x);
	printf("\n y=%d",y);
}
