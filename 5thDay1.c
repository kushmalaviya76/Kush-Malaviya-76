#include<stdio.h>
main()
{
	const float PI = 3.14;
	float R, A;
	
	printf("\n Enter The Value Of Reduse :- ");
	scanf("%f",&R);
	
	A = PI * R * R;
	
	printf("\n The area Of Circle Is :- %0.3f",A);
	
}