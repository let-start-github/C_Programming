//#include<stdio.h>
//int main()
//{
//	char name[10];
//	printf("enter name");
//	scanf("%s",name);    //donot take white space
//	printf("%s",name); 
//}
//#include<stdio.h>
//int main()
//{
//	char name[20];
//	printf("enter your name :");
	//gets(name);      //take white space like(sujit sahoo)
//	printf("%s\n",name);
//	puts(name);
//	puts(name);

//}
//#include<stdio.h>
//int main()
//{
	//char fname[20],lname[20];
//	printf("enter your name");
	//scanf("%s%s",fname,lname);
	//printf("%s %s",fname,lname);
//}
#include<stdio.h>
int main()
{
	char name[20];
	printf("enter your name");
	//scanf("%5s",name);
	gets(name);
	//printf("%.5s\n",name);
	//printf("%10.5s\n",name);
	printf("%s\n",&name[2]);
	//puts(name);
	//puts(name);
	
}