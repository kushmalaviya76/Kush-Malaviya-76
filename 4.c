#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf("\n Enter The Value Of A :: ");
	scanf("%d",&a);
	
	printf("\n Enter The Value Of B :: ");
	scanf("%d",&b);
	
	printf("\n Enter The Value Of C :: ");
	scanf("%d",&c);
	
	printf("\n Enter The Value Of D :: ");
	scanf("%d",&d);
	
	printf("\n Enter The Value Of E :: ");
	scanf("%d",&e);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)	
			{
				if(a<e)	
				{
					printf("\n A Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
			else
			{
				if(d<e)
				{
					printf("\n D Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("\n C Is Small");	
				}
				else
				{
					printf("\n E Is Small");
				}
			}
			else
			{
				if(d<e)
				{
					printf("\n D Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
		}
	}
	else
	{
		if(b<c)	
		{
			if(b<d)
			{
				if(b<e)	
				{
					printf("\n B Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
			else
			{
				if(d<e)
				{
					printf("\n D Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
		}
		else
		{
			if(c<d)	
			{
				if(d<e)
				{
					printf("\n D Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
			else
			{
				if(d<e)
				{
					printf("\n D Is Small");
				}
				else
				{
					printf("\n E Is Small");
				}
			}
		}
	}
}
	