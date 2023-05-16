#include<stdio.h>
main()
{
	int a;
	
	printf("\n Press '1' For January");
	printf("\n Press '2' For February");
	printf("\n Press '3' For March");
	printf("\n Press '4' For April");
	printf("\n Press '5' For May");
	printf("\n Press '6' For June");
	printf("\n Press '7' For Julay");
	printf("\n Press '8' For Augst");
	printf("\n Press '9' For September");
	printf("\n Press '10' For October");
	printf("\n Press '11' For Navember");
	printf("\n Press '12' For December");
	
	printf("\nEnter One Character :: ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 1:
			printf("January");
		break;
		
		case 2:
			printf("February");
		break;
		
		case 3:
			printf("March");
		break;
		
		case 4:
			printf("April");
		break;
		
		case 5:
			printf("May");
		break;
		
		case 6:
			printf("June");
		break;
		
		case 7:
			printf("Julay");
		break;
		
		case 8:
			printf("Augst");
		break;
		
		case 9:
			printf("September");
		break;
		
		case 10:
			printf("October");
		break;
		
		case 11:
			printf("Navember");
		break;
		
		case 12:
			printf("December");
			
		default:
			printf("\n Invelid Charecter, Please Try Again");
	}
	
}