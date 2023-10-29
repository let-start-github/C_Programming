#include<stdio.h>
int main()
{
	int v=0,i=0,l;
	char name[20];
	printf("ENTER YOUR NAME : ");
	scanf("%s",name);
//	int count=strlen(name);

	while(name[i]=='\0')
	{
		if(name[i] == 'a' ||name[i]== 'e' ||name[i]== 'i' ||name[i]== 'o' ||name[i]== 'u')
		{
			v++;
		}
	}
	printf("vowel in your name is %d",v);
}