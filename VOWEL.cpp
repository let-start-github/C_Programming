#include<stdio.h>
main()
{
	char v;
	printf("enter the charecter");
	scanf("%d",&v);
	if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
	{
		printf("it is vowel");
	}
	else
	{
		printf("it is not vowel");
	}
}