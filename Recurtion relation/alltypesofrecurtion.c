#include<stdio.h>
void s1(void);
void s2(int,int);
int s3(void);
int s4(int,int);
int main()
{
	//no return type no argument
	s1();
	
	//no return type with argument
	
	int a=10,b=20;
	s2(a,b);
	//with return type no argument
	
	int s=s3();
	printf("sum3=%d\n",s);
	//with return type with argument
	int x=10,y=20;
	int sum=s4(x,y);
	printf("sum4=%d\n",sum);
}
void s1()
{
	int a=20,b=20;
	int sum=a+b;
	printf("sum1=%d\n",sum);
}
void s2(int a,int b)
{
	int sum=a+b;
	printf("sum2 = %d\n",sum);
}
int s3()
{
	int a=30,b=30;
	int sum=a+b;
	return sum;
}
int s4(int a,int b)
{
	int sum=a+b;
	return sum;
}