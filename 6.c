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
	
	(a>b)
		?(a>c)
			?(a>d)
				? 
					printf("\n A Is Big ") 
				:
					printf("\n D Is Big ") 
			:(c>d)
				?
					printf("\n C Is Big")
				:
					printf("\n D Is Big ")
		:(b>c)
			?(b>d)
				?
					printf("\n B Is Big ")
				:
					printf("\n D Is Big ")
			:(c>d)
				?
					printf("\n C Is Big ")
				:
					printf("\n D Is Big ");
				
}