#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	int mark;
	char name[20];
	float per;
}s1;
int main()
{
	struct student * ptr1;
	ptr1= (struct student *) malloc(3*sizeof(struct student));
	if(ptr1==NULL)
	{
		printf("allocate failed!!!");
	}
	else
	{
		printf("alocate succesfully...");
	}
	int i;
	for(i=0;i<3;i++)
	{
		puts("enter your name : ");
		gets(s1.name);
		printf("enter your mark : ");
		scanf("%d",&s1.mark);
		printf("enter your percentage : ");
		scanf("%f",&s1.per);
	
		ptr1=ptr1+i;
	}
	for(i=0;i<3;i++)
	{
		printf("your mark : ");
		printf("%d\n",s1.mark);
		puts("your name : ");
		puts(s1.name);
		printf("\nyour percentage : ");
		printf("%f",s1.per);
	}
}