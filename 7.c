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
		
	(a>b)
		?(a>c)
			?(a>d)
				?(a>e)
					?
						printf("\n A Is Big ") 
					:
						printf("\n E Is Big ") 
			:(d>e)
				?
					printf("\n D Is Big ")
				:
					printf("\n E Is Big ")
		:(c>d)
			?(c>e)
				?
					printf("\n C Is Big ")
				:
					printf("\n E Is Big ")
			:(d>e)
				?
					printf("\n D Is Big ")
				:
					printf("\n E Is Big ")
			:(b>c)
				?(b>d)
					?(b>e)
						?
							printf("\n B Is Big ") 
						:
							printf("\n E Is Big ") 	
					
				    :(d>e)
				    	?
				    		printf("\n D Is Big ") 
				    	:
				    		printf("\n E Is Big ") 
				    :(c>d)
				    	?(c>e)
				    		?
				    			printf("\n C Is Big ") 
				    		:
				    			printf("\n E Is Big ") 
				    :(d>e)
				    	?
				    		printf("\n D Is Big ") 
				    	:
				    		printf("\n E Is Big "); 
}