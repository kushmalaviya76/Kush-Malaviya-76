#include<stdio.h>
main()
{
    float L, B;
	float A;
	
	printf("\n Enter The Value Of Length :- ");
	scanf("%f",&L);
	
	printf("\n Enter The Value Of Bridth :- ");
	scanf("%f",&B);
	
	A = L * B;
	
	printf("\n The area Of Rectangle Is :- %0.3f",A);
	
}