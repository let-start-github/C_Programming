#include<stdio.h>
main()
{
	char v;
	printf("enter the charecter");
	scanf("%c",&v);
	if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u')
	{
		printf("it is vowel");
	}
	else
	{
		printf("it is a consonant");
	}
}