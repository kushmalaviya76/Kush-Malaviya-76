#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter The Value Of A :- ");
	scanf("%d",&a);
	
	printf("Enter The Value Of B :- ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("  Value Of A = %d ",a);
	printf(" \n  Value Of B = %d ",b);
}