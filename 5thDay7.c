#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter The Value Of A :- ");
	scanf("%d",&a);
	
	printf("Enter The Value Of B :- ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("  Value Of A = %d ",a);
	printf(" \n  Value Of B = %d ",b);
}