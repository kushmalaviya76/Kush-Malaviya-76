#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("\n Enter The Value Of A :: ");
	scanf("%d",&a);
	
	printf("\n Enter The Value Of B :: ");
	scanf("%d",&b);
	
	printf("\n Enter The Value Of C :: ");
	scanf("%d",&c);
	
	printf("\n Enter The Value Of D :: ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("\n A Is Big");
			}
			else
			{
				printf("\n D Is Big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n C Is Big");
			}
			else
			{
				printf("\n D Is Big");
			}
		}
	}
	else
	{
		if(b>c)	
		{
			if(b>d)	
			{
				printf("\n B Is Big");
			}
			else
			{
				printf("\n D Is Big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n C Is Big");
			}
			else
			{
				printf("\n D Is Big");
			}
		}
	}
}
	