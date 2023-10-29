#include<stdio.h>
int main()
{
int a;
printf("enter your number");
scanf("%d",&a);
a=fact(a);
printf("%d",a);	
}
int fact(int x)
{
int s=0;
if(x<=1)
return x;
s=x*fact(x-1);
}