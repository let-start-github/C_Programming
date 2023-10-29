#include<stdio.h>
int fact(int)
main()
{
	int no,f;
	printf("enter your number");
	scanf("%d",&no);
	f=fact(no);
	printf("%d",f);
}
int fact(int no)
{
	if(no==0)
	return 1;
	else if(no==1)
	return 1;
     return=no*fact(no-1);
}