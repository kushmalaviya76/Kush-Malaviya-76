#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n Enter The Value Of A :: ");
	scanf("%d",&a);
	
	printf("\n Enter The Value Of B :: ");
	scanf("%d",&b);

	printf("\n Enter The Value Of C :: ");
	scanf("%d",&c);
		
	(a>b)?
		(a>c)?
		printf("\n A Is Big")
		:printf("\n C Is Big")
	:(b>c)?
		printf("\n B Is Big")
		:printf("\n C Is Big");
}