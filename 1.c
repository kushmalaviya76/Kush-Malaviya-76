#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("\n Press 1 For GUJARATI Language");
	printf("\n Press 2 For HINDI Language");
	printf("\n Press 3 For ENGLISH Language");
	
	printf("\n Enter The Value Of A :: ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("\n GUJARATI");
			
				printf("\n Press 1 For Sim Bandh Karva ");
				printf("\n Press 2 For Network Ma Vandho ");
				printf("\n Press 3 For Rechargr Karva ");
				
				printf("\n Enter The Number ::  ");
				scanf("%d",&b);
				
					switch(b)
					{
						case 1:
							printf("Sim Bandh Karva");
						break;
						
						case 2:	
							printf("Network Ma Vandho");
						break;
						
						case 3:
							printf("Recharge Karva");
						break;
						
						default:
							printf("Invelid Number , Please Enter Number Of 1 to 3");
							
					}
		break;
		
		case 2:
			printf("\n HINDI");
			
				printf("\n Press 4 For Sim Bandh Karne Ke Liye ");
				printf("\n Press 5 For Network Me Problem ");
				printf("\n Press 6 For Recharhe karne Ke Liye ");
				
				printf("\n Enter The Number :: ");
				scanf("%d",&c);
				
				switch(c)
					{
						case 4:
							printf("Sim Bandh Karne Ke Liye");
						break;
						
						case 5:	
							printf("Network Me Problem");
						break;
						
						case 6:
							printf("Recharhe karne Ke Liye");
						break;
						
						default:
							printf("Invelid Number , Please Enter Number Of 4 to 6");
					}
			
		break;
		
		case 3:
			printf("\n ENGLISH");
			
				printf("\n Press 7 For Network Isue ");
				printf("\n Press 8 For Network Problem ");
				printf("\n Press 9 For Rechage ");
				
				printf("\n Enter The Number :: ");
				scanf("%d",&d);
				
					switch(d)
					{
						case 7:
							printf("Network Isue");
						break;
						
						case 8:	
							printf("Network problem");
						break;
						
						case 9:
							printf("Recharge");
						break;
						
						default:
							printf("Invelid Number , Please Enter Number Of 7 to 9");
					}

		break;
		
		default:
			printf("Invelid Number , Please Enter Number Of 1 to 3");
	}
}