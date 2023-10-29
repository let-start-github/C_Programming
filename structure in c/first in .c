#include<stdio.h>
#include<string.h>

//int main()
struct student
{
	int mark;
	char name[20];
	float grade;
}s1,s2,s3;
int main()
{
	int i;
	char n[20],na[20],name[20];
	s1.mark=50;
	printf("enter your name");
	gets(n);
	strcpy(s1.name,n);
	s1.grade=90.5;
	printf("your mark is %d\n",s1.mark);
	printf("your name is %s\n",s1.name);
	printf("your grade is %f",s1.grade);


	s2.mark=50;
	printf("enter your name");
	gets(na);
	strcpy(s2.name,na);
	s2.grade=90.5;
	printf("your mark is %d\n",s2.mark);
	printf("your name is %s\n",s2.name);
	printf("your grade is %f",s2.grade);
	
	
		s3.mark=50;
	printf("enter your name");
	gets(na);
	strcpy(s3.name,name);
	s3.grade=90.5;
	printf("your mark is %d\n",s3.mark);
	printf("your name is %s\n",s3.name);
	printf("your grade is %f",s3.grade);
}