#include<stdio.h>
int main()
{
	int a,note500,note100,note50,note20,note10,note5,note1;
	note500=note100=note50=note20=note10=note5=note1=0;
	printf("ENTER YOUR AMOUNT");
	scanf("%d",&a);
	if(a>=500)
	{
		note500=a/500;
		a=a-note500*500;
		printf("500= %d \n",note500);
	}
	if(a>=100)
	{
		note100=a/100;
		a-=note100*100;
				printf("100= %d \n",note100);

	}
	if(a>=50)
	{
		note50=a/50;
		a-=note50*50;
				printf("50= %d \n",note50);

	}
	if(a>=20)
    {
  	note20=a/20;
  	a-=note20*20;
  			printf("20= %d \n",note20);

    }
    if(a>=10)
    {
    	note10=a/10;
    	a-=note10*10;
    			printf("10= %d \n",note10);

	}
	if(a>=5)
	{
		note5=a/5;
		a-=note5*5;
				printf("5= %d \n",note5);

	}
	if(a>=1)
	{
		note1=a/1;
		a-=note1*1;
				printf("1= %d \n",note1);

	}
	
}