#include<stdio.h>
int main()

{
	int a,b,c;
	printf("ENTER YOUR FIRST NUMBER :");
	scanf("%d",&a);
		printf("ENTER YOUR SECOND NUMBER :");
		scanf("%d",&b);
		printf("ENTER YOUR THIRD NUMBER :");
		scanf("%d",&c);
		if (a==b)
		{
			if(b==c)
			{
				printf("ALL ARE SAME");
			}
			else if(a>c)
			{
			printf("A & B IS LARGEST");
		    }
		    else
		    {
		    	printf("YOUR LARGEST NUMBER IS : %d",c);
			}
		}
	    else if(a==c)
		    {
		    	if(a>b)
		    	{
		    		printf("A & C IS LARGEST");
				}
				else
				{
					printf("YOUR LARGEST NUMBER IS : %d",b);
			    }
			}
	    else if(b==c)
		    {
		    	if(b>a)
		    	{
		    		printf("B & C IS LARGEST");
				}
				else
				{
					printf("YOUR LARGEST NUMBER IS : %d",a);
			    }
			}
		else if (a>b&&a>c)
		{
		
			printf("YOUR LARGEST NUMBER IS : %d",a);
		}
		else if (b>a&&b>c)
		{
			printf("YOUR LARGEST NUMBER IS : %d",b);
		}
		else if(c>a&&c>b)
		
		{
			printf("YOUR LARGEST NUMBER IS : %d",c);
		}
		

	
}