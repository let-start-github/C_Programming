#include<stdio.h>
int main()
{
int i,sum=0;
int a[5];
printf("enter the element of arrey");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
for(int j=0;j<5;j++)
{
	sum=sum+a[j];
}
printf("%d",sum);
}