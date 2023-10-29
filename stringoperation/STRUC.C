#include<stdio.h>
#include<string.h>
void aru();
struct student{
	int mark;
	char name[20];
	float percentage;
}s1;
int main()
{
	int i;
	char nam[20];
	for(i=1;i<4;i++)
	{
		printf("ENTER %d st student details : \n",i);
		aru();
		
		
	}
	
}

void aru()
{

	int i;
	register char nam[20];
	printf("ENTER YOUR NAME : ");
	gets(nam);
	strcpy(s1.name,nam);
	printf("ENTER THE MARK : ");
	scanf("%d",&s1.mark);
//	scanf("%s",s1.name);
//	printf("ENTER YOUR PERCENTAGE :");
//	scanf("%f",&s1.percentage);
	s1.percentage=s1.mark/6;
	
	printf("MARK IS : ");
	printf("%d\n",s1.mark);
	printf("YOUR NAME : ");
	//printf("%s\n",s1.name);
	printf("%s\n",s1.name);
	printf("YOUR PERCENTAGE :");
	printf("%f\n",s1.percentage);
	for(i=0;i<strlen(nam);i++)
	{
		nam[].pop;
	}
	
}
