#include<stdio.h>
main()
{
    float P,R,N;
	float A;
	
	printf("\n Enter The Value Of Your Principal Balance :- ");
	scanf("%f",&P);
	
	printf("\n Enter The Value Of Interest Rate :- ");
	scanf("%f",&R);
	
	printf("\n Enter The Value Of Interest Time :- ");
	scanf("%f",&N);
	
	A = P * R * N / 100;
	
	printf("\n Final Amount Is :- %0.3f",A);
	
}