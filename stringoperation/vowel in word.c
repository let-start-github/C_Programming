#include<stdio.h>
#include<string.h>
int main()
{
	char word[50];
	puts("enter your word");
	gets(word);
	int x=strlen(word);
	
	int i,count=0,con=0;
	for(i=0;i<strlen(word);i++)
	{
		if (word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'
		|| word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
		{
			count++;
		}
		else
		{
		con++;	
		}
	}
	printf("vowel in word = %d\n",count);
	printf("consonant is in word = %d",con);
	
	
	
}