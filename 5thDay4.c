#include<stdio.h>
main()
{
    float H, B;
	float A;
	
	printf("\n Enter The Value Of Height :- ");
	scanf("%f",&H);
	
	printf("\n Enter The Value Of Base :- ");
	scanf("%f",&B);
	
	A = ( H*B )/2;

	printf("\n The area Of Triangle Is :- %0.3f",A);
	
}