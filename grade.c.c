#include<stdio.h>
main()
{
	int A,B,C,D,E,F;
	printf("ENGLISH");
	scanf("%d",&A);
	printf("ODIA");
	scanf("%d",&B);
	printf("SANSKRIT");
	scanf("%d",&C);
	printf("MATH");
	scanf("%d",&D);
	printf("SCIENCE");
	scanf("%d",&E);
	printf("SOCIAL SCIENCE");
	scanf("%d",&F);
float s=(A+B+C+D+E+F)/6;
	printf("YOUR TOTAL PERCENT IS: %f \n",s);
	if(s>=90&&s<=100)
	{
		printf("GRADE A");
	}
	else if(s>=80&&s<=89)
	{
	printf("GRADE B1");
    }
    else if(s>=70&&s<=79)
    {
    	printf("GRADE B2");
	}
	else if(s>=60&&s<=69)
	{
		printf("GRADE C");
	}
	else if(s>=50&&s<=59)
	{
		printf("GRADE D");
		
	}
	else if(s>=40&&s<=49)
	{
		printf("GRADE E");
	}
	else if(s>=30&&s<=39)
	{
		printf("GRADE F");
	}
	else
	{
		printf("fail");
	}
}